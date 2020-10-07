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
        break;
    case '-':
	    subtraction();
        
        break;
    case '*':
	     multiplication();

        break;
    case '/':
	     division();
        
        break;
   
        case '%': modulus();
                      break;
 
        case '!': factorial();
                      break;
	case '^': power();
                      break;
 
 
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
