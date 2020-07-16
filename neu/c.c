#include <stdio.h>
#include <stdlib.h> /* for atof() */
#include <ctype.h>
#include<math.h>
#define MAXOP 100 /* max size of operand or operator */ 
#define NUMBER '0' /* signal that a number was found */
#define MAXVAL 100 /* maximum depth of val stack */
#define BUFSIZE 100

int getop(char []);
char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */
void push(double);
double pop(void);
int sp = 0; /* next free stack position */ 
int getch(void);
void ungetch(int);
double modular(double[], double[]);
void printop();/* print top elemet of the stack */
void cpstack();/* duplicate the top element of the stack */
void exstack();/* exchange the top two elements of the stack */
void clcstack();/* clear the whole stack*/


/* reverse Polish calculator */ 
int main()
{
	int type; double op2; char s[MAXOP];
	while ((type = getop(s)) != EOF) { switch (type) {
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop(); 
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0) 
				push(pop() / op2);
			else
				printf("error: zero divisor\n");
			break;
		case '%':
			op2 = pop();
			push((double)(((int) pop()) % ((int) op2)));
			break;
		case 'q':              /* q stands for sin*/
			push(sin(pop()));
			break;
		case 'w':              /* w stands for exponential */
			push(exp(pop()));
			break;
		case 'r':              /*  r stands for power */
			op2 = pop();
			push(pow(pop(), op2));
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		case 'p':           
			printop();
			break;
		case 'c':
			cpstack();
			break;
		case 'e':
			exstack();
			break;
		case 's':
			clcstack();
			break;
		default:
			printf("error: unknown command %s\n", s);
			break; }
	}
	return 0; 
}



double val[MAXVAL]; /* value stack */

void push(double f) /* push: push f onto value stack */ 
{
	if (sp < MAXVAL) val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}
double pop(void)/* pop: pop and return top value from stack */
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n"); 
		return 0.0;
	} 
}

/* getop: get next character or numeric operand */ 
int getop(char s[])
{
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t') 
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c; /* not a number */ 
	i = 0;
	if (isdigit(c)) /* collect integer part */ 
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.') /* collect fraction part */
		while (isdigit(s[++i] = c = getch())) ;
	s[i] = '\0'; if (c != EOF)
		ungetch(c) ;
	return NUMBER;
}
int getch(void) /* get a (possibly pushed-back) character */ {
	return (bufp > 0) ? buf[--bufp] : getchar(); 
}
void ungetch(int c) /* push character back on input */ 
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}
void printop()
{
	if (sp > 0)
		printf("%.3lf\n", val[sp-1]);
	else
		printf("error: stack empty, can't printop\n");
}
void cpstack()
{
	if (sp > 0)
	{
		val[sp] = val[sp - 1];
		sp = sp + 1;
	}
	else
		printf("error: stack empty, can't copystack\n");
}
void exstack()
{
	double mid;
	if (sp > 1)
	{
		mid = val[sp - 1];
		val[sp - 1] = val[sp - 2];
		val[sp - 2] = mid;
	}
	else
		printf("error: insufficient stack to exchange\n");
}
void clcstack()
{
	sp = 0;
}
