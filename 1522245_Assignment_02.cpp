#include<iostream>
#include <fstream>
using namespace std;
void displayArray(char *A, int s);
char *intersectionOperation(char *A, char *B, int x,int y,int &sizeReturnArray);
char *unionOperation(char *A, char *B, int x, int y, int &sizeReturnArray);
void crossProductOperation(char *A, char *B, int x,int y);
bool *decimalToBinary(int n,int x,int &last);
void powerSetOperation(char *A,int x);
bool testSetProperty(char *A, char *B,int x,int y);
int main()
{


    char *A,*B, *C, *D;

//-----------------------------Set A ---------------------------------------------------------------------------------------
    ifstream inFileA;
    string s="";
    inFileA.open("inputfileA.txt");
    if (!inFileA)
    {
        cout << "File not found in the directory";
    }
    inFileA>>s;
    inFileA.close();
    int i=0, commaCounterA=0, indexSizeA=0, initializerA=0;
    while(s[i]!=NULL)
    {
        i++;
    }
    if(i==0)
    {
        cout<<"Empty file for set A\n";
    }
    else
    {
        for(int a=0; a<i; a++)
        {
            if(s[a]==',')
            {
                commaCounterA++;
            }
        }
        indexSizeA=i-commaCounterA;
        A=new char[indexSizeA];
        for(int a=0; a<i; a++)
        {
            if(s[a]!=',')
            {
                A[initializerA]=s[a];
                initializerA++;
            }
        }
    }
    //cout<<"A";
    //displayArray(A,indexSizeA);
//-------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------Set B -------------------------------------------------------------------------------
    ifstream inFileB;
    string t="";
    inFileB.open("inputfileB.txt");
    if (!inFileB)
    {
        cout << "File not found in the directory";
    }
    inFileB>>t;
    inFileB.close();
    int j=0, commaCounterB=0, indexSizeB=0, initializerB=0;
    while(t[j]!=NULL)
    {
        j++;
    }
    if(j==0)
    {
        cout<<"Empty file for set B\n";
    }
    else
    {
        for(int a=0; a<j; a++)
        {
            if(t[a]==',')
            {
                commaCounterB++;
            }
        }
        indexSizeB=j-commaCounterB;
        B=new char[indexSizeB];
        for(int a=0; a<j; a++)
        {
            if(t[a]!=',')
            {
                B[initializerB]=t[a];
                initializerB++;
            }
        }
    }
    //cout<<"B";
    //displayArray(B,indexSizeB);

//------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------- Set C ---------------------------------------------------------------------
    ifstream inFileC;
    string u="";
    inFileC.open("inputfileC.txt");
    if (!inFileC)
    {
        cout << "File not found in the directory";
    }
    inFileC>>u;
    inFileC.close();
    int k=0, commaCounterC=0, indexSizeC=0, initializerC=0;
    while(u[k]!=NULL)
    {
        k++;
    }
    if(k==0)
    {
        cout<<"Empty file for set C\n";
    }
    else
    {
        for(int a=0; a<k; a++)
        {
            if(u[a]==',')
            {
                commaCounterC++;
            }
        }
        indexSizeC=k-commaCounterC;
        C=new char[indexSizeC];
        for(int a=0; a<k; a++)
        {
            if(u[a]!=',')
            {
                C[initializerC]=u[a];
                initializerC++;
            }
        }
    }
    //cout<<"C";
    //displayArray(C,indexSizeC);
//------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------- SetD -----------------------------------------------------------------
    ifstream inFileD;
    string v="";
    inFileD.open("inputfileD.txt");
    if (!inFileD)
    {
        cout << "File not found in the directory";
    }
    inFileD>>v;
    inFileD.close();
    int l=0, commaCounterD=0, indexSizeD=0, initializerD=0;
    while(v[l]!=NULL)
    {
        l++;
    }
    if(l==0)
    {
        cout<<"Empty file for set D\n";
    }
    else
    {
        for(int a=0; a<l; a++)
        {
            if(v[a]==',')
            {
                commaCounterD++;
            }
        }
        indexSizeD=l-commaCounterD;
        D=new char[indexSizeD];
        for(int a=0; a<l; a++)
        {
            if(v[a]!=',')
            {
                D[initializerD]=v[a];
                initializerD++;
            }
        }
    }
    //cout<<"D";
    //displayArray(D,indexSizeD);
//-----------------------------------------------------------------------------------------------------------------------
    cout<<"\nPress 1 to view solution to question 1"<<endl;
    cout<<"Press 2 to view solution to question 2"<<endl;
    cout<<"Press 3 to view solution to question 3"<<endl;
    cout<<"Press 4 to view solution to question 4"<<endl;
    cout<<"Press 5 to view solution to question 5"<<endl;
    cout<<"Press 6 to view solution to question 6"<<endl;
    char selection;
    cin>>selection;
//-------------------------------------------------------------------------------------------------------------------------
    if(selection=='1')
    {
        cout<<"\nA";
        displayArray(A,indexSizeA);
        cout<<"B";
        displayArray(B,indexSizeB);
        cout<<"C";
        displayArray(C,indexSizeC);
        cout<<"D";
        displayArray(D,indexSizeD);
        char *E, *F, *G;
        int sizeReturnArrayE=0, sizeReturnArrayF=0, sizeReturnArrayG=0;
        E=unionOperation(A,C,indexSizeA,indexSizeC,sizeReturnArrayE);
        cout<<"\nA U C";
        displayArray(E,sizeReturnArrayE);
        F=unionOperation(A,D,indexSizeA,indexSizeD,sizeReturnArrayF);
        cout<<"A U D";
        displayArray(F,sizeReturnArrayF);
        G=intersectionOperation(E,F,sizeReturnArrayE,sizeReturnArrayF,sizeReturnArrayG);
        cout<<"(A U C) ^ (A U D)";
        displayArray(G,sizeReturnArrayG);
        cout<<endl;
    }
//------------------------------------------------------------------------------------------------------------------------
    else if(selection=='2')
    {
        char power[]= {'1','3','2'};
        cout<<"\nA";
        displayArray(power,3);
        cout<<"power set of given set A :"<<endl;
        powerSetOperation(power,3);
        cout<<endl;
    }

//-----------------------------------------------------------------------------------------------------------------------
    else if(selection=='3')
    {
        char AA[]= {'1','3'};
        char BB[]= {'a','b','f'};
        cout<<"\nA";
        displayArray(AA,2);
        cout<<"B";
        displayArray(BB,3);
        cout<<"\nA X B";
        crossProductOperation(AA,BB,2,3);
    }

//-------------------------------------------------------------------------------------------------------------------------
    else if(selection=='4')
    {
        cout<<"\nA";
        displayArray(A,indexSizeA);
        cout<<"B";
        displayArray(B,indexSizeB);
        char *H, *I, *J, *K;
        int sizeReturnArrayH=0, sizeReturnArrayI=0, sizeReturnArrayJ=0, sizeReturnArrayK=0;
        H=unionOperation(A,B,indexSizeA,indexSizeB,sizeReturnArrayH);
        cout<<endl<<"A U B";
        displayArray(H,sizeReturnArrayH);
        I=unionOperation(B,A,indexSizeB,indexSizeA,sizeReturnArrayI);
        cout<<"B U A";
        displayArray(I,sizeReturnArrayI);
        if(testSetProperty(H,I,sizeReturnArrayH,sizeReturnArrayI))
        {
            cout<<"Commutative property A U B = B U A is valid\n";
        }
        else
        {
            cout<<"Commutative property A U B = B U A is invalid\n";
        }
        J=intersectionOperation(A,B,indexSizeA,indexSizeB,sizeReturnArrayJ);
        cout<<"\nA ^ B";
        displayArray(J,sizeReturnArrayJ);
        K=intersectionOperation(B,A,indexSizeB,indexSizeA,sizeReturnArrayK);
        cout<<"B ^ A";
        displayArray(K,sizeReturnArrayK);
        if(testSetProperty(J,K,sizeReturnArrayJ,sizeReturnArrayK))
        {
            cout<<"Commutative property A ^ B = B ^ A is valid\n";
        }
        else
        {
            cout<<"Commutative property A ^ B = B ^ A is invalid\n";
        }
    }
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
    else if(selection=='5')
    {
        cout<<"\nA";
        displayArray(A,indexSizeA);
        cout<<"B";
        displayArray(B,indexSizeB);
        cout<<"C";
        displayArray(C,indexSizeC);
        char *L, *M, *N, *O, *P, *Q, *R, *S;
        int sizeReturnArrayL=0, sizeReturnArrayM=0, sizeReturnArrayN=0, sizeReturnArrayO=0, sizeReturnArrayP=0, sizeReturnArrayQ=0,sizeReturnArrayR=0,sizeReturnArrayS=0;
        L=unionOperation(A,B,indexSizeA,indexSizeB,sizeReturnArrayL);
        M=unionOperation(L,C,sizeReturnArrayL,indexSizeC,sizeReturnArrayM);
        cout<<"\n(A U B) U C";
        displayArray(M,sizeReturnArrayM);
        N=unionOperation(B,C,indexSizeB,indexSizeC,sizeReturnArrayN);
        O=unionOperation(A,N,indexSizeA,sizeReturnArrayN,sizeReturnArrayO);
        cout<<"A U (B U C)";
        displayArray(O,sizeReturnArrayO);
        if(testSetProperty(M,O,sizeReturnArrayM,sizeReturnArrayO))
        {
            cout<<"Associative property (A U B) U C = A U (B U C) is valid\n";
        }
        else
        {
            cout<<"Associative property (A U B) U C = A U (B U C) is invalid\n";
        }
        P=intersectionOperation(A,B,indexSizeA,indexSizeB,sizeReturnArrayP);
        Q=intersectionOperation(P,C,sizeReturnArrayP,indexSizeC,sizeReturnArrayQ);
        cout<<"\n(A ^ B) ^ C";
        displayArray(Q,sizeReturnArrayQ);
        R=intersectionOperation(B,C,indexSizeB,indexSizeC,sizeReturnArrayR);
        S=intersectionOperation(A,R,indexSizeA,sizeReturnArrayR,sizeReturnArrayS);
        cout<<"A ^ (B ^ C)";
        displayArray(S,sizeReturnArrayS);
        if(testSetProperty(Q,S,sizeReturnArrayQ,sizeReturnArrayS))
        {
            cout<<"Associative property (A ^ B) ^ C = A ^ (B ^ C) is valid\n";
        }
        else
        {
            cout<<"Associative property (A ^ B) ^ C = A ^ (B ^ C) is invalid\n";
        }
    }
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    else if(selection=='6')
    {
        cout<<"\nA";
        displayArray(A,indexSizeA);
        cout<<"B";
        displayArray(B,indexSizeB);
        cout<<"C";
        displayArray(C,indexSizeC);
        char *T, *U, *V, *W, *X, *Y, *Z, *AAA, *BBB, *CCC;
        int sizeReturnArrayT=0, sizeReturnArrayU=0, sizeReturnArrayV=0, sizeReturnArrayW=0, sizeReturnArrayX=0, sizeReturnArrayY=0, sizeReturnArrayZ=0, sizeReturnArrayAAA=0, sizeReturnArrayBBB=0, sizeReturnArrayCCC=0;
        T=intersectionOperation(B,C,indexSizeB,indexSizeC,sizeReturnArrayT);
        U=unionOperation(A,T,indexSizeA,sizeReturnArrayT,sizeReturnArrayU);
        cout<<"\nA U (B ^ C)";
        displayArray(U,sizeReturnArrayU);
        V=unionOperation(A,B,indexSizeA,indexSizeB,sizeReturnArrayV);
        W=unionOperation(A,C,indexSizeA,indexSizeC,sizeReturnArrayW);
        X=intersectionOperation(V,W,sizeReturnArrayV,sizeReturnArrayW,sizeReturnArrayX);
        cout<<"(A U B) ^ (A U C)";
        displayArray(X,sizeReturnArrayX);
        if(testSetProperty(U,X,sizeReturnArrayU,sizeReturnArrayX))
        {
            cout<<"Distributive property A U (B ^ C) = (A U B) ^ (A U C) is valid\n";
        }
        else
        {
            cout<<"Distributive property A U (B ^ C) = (A U B) ^ (A U C) is invalid\n";
        }
        Y=unionOperation(B,C,indexSizeB,indexSizeC,sizeReturnArrayY);
        Z=intersectionOperation(A,Y,indexSizeA,sizeReturnArrayY,sizeReturnArrayZ);
        cout<<"\nA ^ (B U C)";
        displayArray(Z,sizeReturnArrayZ);
        AAA=intersectionOperation(A,B,indexSizeA,indexSizeB,sizeReturnArrayAAA);
        BBB=intersectionOperation(A,C,indexSizeA,indexSizeC,sizeReturnArrayBBB);
        CCC=unionOperation(AAA,BBB,sizeReturnArrayAAA,sizeReturnArrayBBB,sizeReturnArrayCCC);
        cout<<"(A ^ B) U (A ^ C)";
        displayArray(CCC,sizeReturnArrayCCC);
        if(testSetProperty(Z,CCC,sizeReturnArrayZ,sizeReturnArrayCCC))
        {
            cout<<"Distributive property A ^ (B U C) = (A ^ B) U (A ^ C) is valid\n";
        }
        else
        {
            cout<<"Distributive property A ^ (B U C) = (A ^ B) U (A ^ C) is invalid\n";
        }
    }
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    else
    {
        cout<<"\nIncorrect input please try again. "<<endl;
    }

    return 0;
}
void displayArray(char *A, int s)
{
    if(s==0)
    {
        cout<<" = { }"<<endl;
    }
    else
    {
        cout<<" = {";
        for(int i=0; i<s; i++)
        {
            if(i==s-1)
            {
                cout<<A[i];
            }
            else
            {
                cout<<A[i]<<",";
            }
        }
        cout<<"}";
        cout<<endl;
    }
}
char *intersectionOperation(char *A, char *B, int x,int y, int &sizeReturnArray)
{
    int k=0;
    char *intersectionArray;
    if(x<=y)
    {
        intersectionArray=new char[x];
        for(int i=0; i<x; i++)
        {
            intersectionArray[i]='\0';
        }
    }
    else
    {
        intersectionArray=new char[y];
        for(int i=0; i<y; i++)
        {
            intersectionArray[i]='\0';
        }
    }
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            if(A[i]==B[j])
            {
                intersectionArray[k]=B[j];
                k++;
            }
        }
    }
    sizeReturnArray=k;
    return intersectionArray;
}
char *unionOperation(char *A, char *B, int x, int y, int &sizeReturnArray)
{
    int k = 0, z = 0;
    char *intersectionArray, *unionArray;

    if (x <= y)
    {
        intersectionArray = new char[x];
        for(int i=0; i<x; i++)
        {
            intersectionArray[i]='\0';
        }
    }
    else
    {
        intersectionArray = new char[y];
        for(int i=0; i<y; i++)
        {
            intersectionArray[i]='\0';
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (A[i] == B[j])
            {
                intersectionArray[k] = B[j];
                k++;
            }
        }
    }
    if (k == 0)
    {
        z = x + y;
        sizeReturnArray=z;
        unionArray = new char[z];
        int l = 0, r = 0;
        for (int i = 0; i < z; i++)
        {
            if (x > i)
            {
                unionArray[i] = A[i];
            }
            else
            {
                unionArray[i] = B[i - x];
            }
        }
        return unionArray;

    }
    else
    {
        char *copy2B= new char[y - k];
        int m = 0;
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (B[i] == intersectionArray[j])
                {
                    break;
                }
                if (j == k - 1)
                {
                    copy2B[m] = B[i];
                    m++;
                }
            }
        }
        z = x +y - k;
        sizeReturnArray=z;
        unionArray = new char[z];
        int l = 0, r = 0;
        for (int i = 0; i < z; i++)
        {
            if (x > i)
            {
                unionArray[i] = A[i];
            }
            else
            {
                unionArray[i] = copy2B[i - x];
            }
        }
        return unionArray;

    }

}
void crossProductOperation(char *A, char *B, int x,int y)
{
    cout<<" = {";
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            if(i==x-1&&j==y-1)
            {
                cout<<"("<<A[i]<<","<<B[j]<<")";
            }
            else
            {
                cout<<"("<<A[i]<<","<<B[j]<<"),";
            }
        }
    }
    cout<<"}"<<endl;
}
bool *decimalToBinary(int n,int x,int &last)
{
    int *remainder=new int[x];
    for(int i=0; i<x; i++)
    {
        remainder[i]=0;
    }
    int k=n, counter=0, finalNumber=0, num=0, temp=0;
    while(k!=0)
    {
        remainder[counter]=k%2;
        k=k/2;
        counter++;
    }
    for(int i=0; i<x/2; i++)
    {
        temp=remainder[i];
        remainder[i]=remainder[x-1-i];
        remainder[x-1-i]=temp;
    }
    bool *checker=new bool[x];
    for(int i=0; i<x; i++)
    {
        checker[i]=false;
    }
    for(int i=0; i<x; i++)
    {
        if(remainder[i]==1)
        {
            checker[i]=true;
            last=i;
        }
    }
    return checker;
}
void powerSetOperation(char *A,int x)
{
    int setSize=1, last=0;
    for(int i=0; i<x; i++)
    {
        setSize *= 2;
    }
    bool *p=new bool[x];
    for(int i=0; i<x; i++)
    {
        p[i]=false;
    }
    cout<<"{";
    for(int i=0; i<setSize; i++)
    {
        p=decimalToBinary(i,x,last);
        cout<<"{";
        for(int j=0; j<x; j++)
        {
            if(p[j])
            {
                if(j==last)
                {
                    cout<<A[j];
                }
                else
                {
                    cout<<A[j]<<",";
                }
            }
        }
        if(i==setSize-1)
        {
            cout<<"}";
        }
        else
        {
            cout<<"}, ";
        }
    }
    cout<<"}";
}
bool testSetProperty(char *A, char *B,int x,int y)
{
    if(x!=y)
    {
        return false;
    }
    int counter=0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (A[i] == B[j])
            {
                counter++;
            }
        }
    }
    if(counter!=x)
    {
        return false;
    }
    return true;
}



