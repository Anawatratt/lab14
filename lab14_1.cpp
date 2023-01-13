#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);


int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}


void stat(const double A[],int N,double B[]){
    int i=0;
    double sum=0;
    while(i<N)
    {
        sum += A[i];
        i++;
    }
    double mean=sum/N;
    B[0]=mean;


    double SD=0;
    double Sigma=0;
    i=0;
    while(i<N)
    {
        Sigma += pow(A[i],2);
        i++;
    }

    SD=sqrt((Sigma-((double)N*pow(mean,2)))/(double)N);
    B[1]=SD;



    double GM=0;
    double summultiply=1;
    i=0;
    while(i<N)
    {
        summultiply*=A[i];
        i++;
    }GM= pow(summultiply,1/(double)N);
    B[2]=GM;


    i=0;
    double sumt;
    while(i<N)
    {
        sumt+=1/A[i];
        i++;
    }double HM=(double)N/sumt;
    B[3]=HM;


    i=0;
    double max=0;
     while(i<N)
    {
        if(max<=A[i])
        max = A[i];
        i++;
    }B[4]=max;


     i=0;
    double min=999;
     while(i<N)
    {
        if(min>=A[i])
        min = A[i];
        i++;
    }B[5]=min;
}
    