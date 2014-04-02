int main (){
	int op1 = 4;
	int op2 = 3;
	printf ("SUMA: %i \n", suma(op1, op2));
	printf ("RESTA: %i \n", resta(op1, op2));
	printf ("MULTIPLICACION: %i \n", multiplicacion(op1, op2));
	return 0;
}

int suma (int op1, int op2){
	return op1+op2;
}

int multiplicacion(int op1, int op2){
	return op1*op2;
}