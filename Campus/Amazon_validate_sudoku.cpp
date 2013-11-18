/* Program to check whether the given SUDOKU is valid or not
   Written By : Akey-
*/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int a[9][9];
    int hash[10]={0};
    int flag=0;

    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            scanf("%d",&a[i][j]);

    //checking for rows
    for(int i=0;i<9;i++)
    {
        memset(hash,0,sizeof(hash));
        for(int j=0;j<9;j++)
        {
            hash[a[i][j]]++;
        }
        for(int k=1;k<10;k++)
        {
            //printf("%d %d\n",hash[k],k);
            if(!hash[k] || hash[k]>1)
            {
                flag=0;
                printf("INVALID+\n");
                return 0;
            }
            else
                flag=1;
        }
    }

    //checking for column

    for(int i=0;i<9;i++)
    {
        memset(hash,0,sizeof(hash));
        for(int j=0;j<9;j++)
        {
            hash[a[j][i]]++;
        }
        for(int k=1;k<10;k++)
        {
            if(!hash[k] || hash[k]>1)
            {
                printf("INVALID1\n");
                return 0;
            }
            else
                flag=1;
        }
    }

    //checking for grids
    // for the grid a[3][3];
    memset(hash,0,sizeof(hash));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            hash[a[i][j]]++;
        }
    }
    for(int i=1;i<10;i++)
    {
        if(!hash[i] || hash[i]>1)
        {
            printf("INVALID2\n");
            return 0;
        }
        else
            flag=1;
    }


    memset(hash,0,sizeof(hash));
    for(int i=0;i<3;i++)
    {
        for(int j=3;j<6;j++)
        {
            hash[a[i][j]]++;
        }
    }
    for(int i=1;i<10;i++)
    {
        if(!hash[i] || hash[i]>1)
        {
            printf("INVALID\n");
            return 0;
        }
        else
            flag=1;
    }



    memset(hash,0,sizeof(hash));
    for(int i=0;i<3;i++)
    {
        for(int j=6;j<9;j++)
        {
            hash[a[i][j]]++;
        }
    }
    for(int i=1;i<10;i++)
    {
        if(!hash[i] || hash[i]>1)
        {
            printf("INVALID\n");
            return 0;
        }
        else
            flag=1;
    }

    // for the grid a[3][3];
    memset(hash,0,sizeof(hash));
    for(int i=3;i<6;i++)
    {
        for(int j=0;j<3;j++)
        {
            hash[a[i][j]]++;
        }
    }
    for(int i=1;i<10;i++)
    {
        if(!hash[i] || hash[i]>1)
        {
            printf("INVALID\n");
            return 0;
        }
        else
            flag=1;
    }


    memset(hash,0,sizeof(hash));
    for(int i=3;i<6;i++)
    {
        for(int j=3;j<6;j++)
        {
            hash[a[i][j]]++;
        }
    }
    for(int i=1;i<10;i++)
    {
        if(!hash[i] || hash[i]>1)
        {
            printf("INVALID\n");
            return 0;
        }
        else
            flag=1;
    }



    memset(hash,0,sizeof(hash));
    for(int i=3;i<6;i++)
    {
        for(int j=6;j<9;j++)
        {
            hash[a[i][j]]++;
        }
    }
    for(int i=1;i<10;i++)
    {
        if(!hash[i] || hash[i]>1)
        {
            printf("INVALID\n");
            return 0;
        }
        else
            flag=1;
    }


    // for the grid a[3][3];
    memset(hash,0,sizeof(hash));
    for(int i=6;i<9;i++)
    {
        for(int j=0;j<3;j++)
        {
            hash[a[i][j]]++;
        }
    }
    for(int i=1;i<10;i++)
    {
        if(!hash[i] || hash[i]>1)
        {
            printf("INVALID\n");
            return 0;
        }
        else
            flag=1;
    }


    memset(hash,0,sizeof(hash));
    for(int i=6;i<9;i++)
    {
        for(int j=3;j<6;j++)
        {
            hash[a[i][j]]++;
        }
    }
    for(int i=1;i<10;i++)
    {
        if(!hash[i] || hash[i]>1)
        {
            printf("INVALID\n");
            return 0;
        }
        else
            flag=1;
    }


    memset(hash,0,sizeof(hash));
    for(int i=6;i<9;i++)
    {
        for(int j=6;j<9;j++)
        {
            hash[a[i][j]]++;
        }
    }
    for(int i=1;i<10;i++)
    {
        if(!hash[i] || hash[i]>1)
        {
            printf("INVALID\n");
            return 0;
        }
        else
            flag=1;
    }

    if(flag) printf("VALID\n");
    return 0;
}
