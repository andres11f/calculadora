int main (){
	int op1 = 4;
	int op2 = 3;
	printf ("SUMA: %i \n", suma(op1, op2));
	printf ("RESTA: %i \n", resta(op1, op2));
	printf ("MULTIPLICACION: %i \n", multiplicacion(op1, op2));
	return 0;
}

//suma dos valores.
int suma (int op1, int op2){
	return op1+op2;
}

//multiplica dos valores.
int multiplicacion(int op1, int op2){
	return op2*op1;
}

int division(int op1, int op2){
	return op1/op2;
}