int main() {
    char operator;
  
    printf("Enter an operator +, -, *,/,%,! ");
    scanf("%c", &operator);
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
