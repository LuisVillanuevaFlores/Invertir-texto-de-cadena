#include <iostream>

using namespace std;
int tamarr( char c[]){
    int con=0;
	while(c[con]!='\0'){
		con++;
	}
	return con;
}

int tamapu(char*c){
	char*a;
	a=c;
	while(*c!='\0'){
		c++;
	}
	return c-a;
}



//USANDO ARREGLOS
char *inter(char cad[]){
    int x=tamarr(cad);
    char *y=new char[x];
    for(int i=0;i<x;i++){
        y[i]=cad[x-i-1];
    }
    return y;

}
//USANDO PUNTEROS

char*inter2(char*a){
    int tam=tamapu(a);
    char*aux=new char[tam];
    aux+=tam;
    while(*a!='\0'){
        char tem=*a;
        *aux=tem;
        a++;aux--;
    }
    aux++;
    return aux;

}



int main()
{

    char cad1[]={"juana"};
    cout<<inter(cad1)<<endl;
    char *cad2=new char[10];
    cin>>cad2;
    cout<<inter2(cad2);
    delete cad2;

    return 0;
}
