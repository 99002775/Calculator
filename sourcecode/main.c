int main() {
    char operator;
   // double first, second;
    printf("Enter an operator +, -, *,/,%,! ");
    scanf("%c", &operator);
   // printf("Enter two operands: ");
   // scanf("%lf %lf", &first, &second);

    switch (operator) {
    case '+':
	    addition();
       // printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
	    subtraction();
        //printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
	     multiplication();
        //printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
	     division();
        //printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        // operator doesn't match any case constant
		 case '%': modulus();
                      break;
 
            case '!': factorial();
                      break;
 
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
