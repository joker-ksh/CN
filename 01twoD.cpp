#include <bits/stdc++.h>
using namespace std;
void TwoDParityCheck(int mat[100][100],int N,int M)
{
    for (int i = 0; i < N; i++)
    {
        int parity = 0;
        for (int j = 0; j < M; j++)
        {
            parity^=mat[i][j];  
        }
        mat[i][M] = parity; 
    }
    for (int i = 0; i < M; i++)
    {
        int parity = 0;
        for (int j = 0; j < N; j++)
        {
            parity^=mat[i][j];  
        }
        mat[N][i] = parity; 
    }
    mat[N][M] = -1;
    for (int i = 0; i <=N; i++)
    {
        for (int j = 0; j <= M; j++)
        {
            if(i!=N or j!=M)
                cout<<mat[i][j]<<' ';
        }
        cout<<endl;
    }
}

int main()
{
    int N,M;
    int sender[100][100],receiver[100][100];
    cin>>N>>M;
    cout<<"Enter sender matrix\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin>>sender[i][j];
        }  
    }
    encode(sender,N,M);
    cout<<"Enter receiver matrix\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin>>receiver[i][j];
        }
    }
    TwoDParityCheck(receiver,N,M);
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= M; j++)
        {
            if(sender[i][j]!=receiver[i][j])
            {
                cout<<"Message Corrupted\n";
                return 0;
            }
        }
    }
    cout<<"Message Received succesfully\n";
    return 0;
}

