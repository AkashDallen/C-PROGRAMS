#include <stdio.h>
void enterData(int a[10][10],int b[10][10],int row1,int col1,int row2,int col2);
void multiply(int a[10][10],int b[10][10],int mul[10][10],int row1,int col1,int row2,int col2);
void display(int mul[10][10],int a[10][10],int b[10][10],int row1,int col1,int row2,int col2);

int main()
{
    int a[10][10],b[10][10],mul[10][10],row1,col1,row2,col2,i,j,k;

    printf("Enter rows and columns for matrix a : ");
    scanf("%d%d",&row1,&col1);

    printf("Enter rows and columns for matrix b : ");
    scanf("%d%d",&row2,&col2);

    while(col1!=row2)
    {
        printf("Error! col1 is not equal to row2.\n");

        printf("Enter rows and columns for matrix a : ");
        scanf("%d%d",&row1,&col1);

        printf("Enter rows and columns for matrix b : ");
        scanf("%d%d",&row2,&col2);
    }

    enterData(a,b,row1,col1,row2,col2);

    multiply(a,b,mul,row1,col1,row2,col2);

    display(mul,a,b,row1,col1,row2,col2);

    return 0;
}

void enterData(int a[10][10],int b[10][10],int row1,int col1,int row2,int col2)
{
    int i,j;
    printf("\nEnter elements of matrix a : \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("Enter elements %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter elements of matrix b : \n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("Enter elements %d%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
}

void multiply(int a[10][10],int b[10][10],int mul[10][10],int row1,int col1,int row2,int col2)
{
    int i,j,k;

    for(i=0;i<row1;++i)
    {
        for(j=0;j<col2;++j)
        {
            mul[i][j]=0;
        }
    }

    for(i=0;i<row1;++i)
    {
        for(j=0;j<col2;++j)
        {
            for(k=0;k<col1;++k)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

void display(int mul[10][10],int a[10][10],int b[10][10],int row1,int col1,int row2,int col2)
{
    int i,j;

    printf("\n Matrix a \n");
    for(i=0;i<row1;++i)
    {
        for(j=0;j<col1;++j)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n Matrix b \n");
    for(i=0;i<row2;++i)
    {
        for(j=0;j<col2;++j)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix \n");
    for(i=0;i<row1;++i)
    {
        for(j=0;j<col2;++j)
        {
            printf("%d\t",mul[i][j]);
            if(j==col2-1)
                printf("\n\n");
        }
    }
}