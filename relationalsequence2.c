
#include <string.h>
#include <stdio.h>


int iLengthHelper(int i, int length)
{
    if(i / 10 == 0)
        return length;
    return iLengthHelper(i / 10, length + 1);
}

int iLength(int i)
{
    return iLengthHelper(i,1);
}

int main()
{
    char str[100];
    int p = 0;
    
    if (fgets(str, 100, stdin) == NULL) {
    // Handle the error, for example:
        fprintf(stderr, "Error reading input.\n");
        return 1; // Exit with an error code
    }
    sscanf(str,"%d",&p);
    
    for(int i = 1; i <= p ; i++)
    {
        if (fgets(str, 100, stdin) == NULL) {
            // Handle the error, for example:
            fprintf(stderr, "Error reading input.\n");
            return 1; // Exit with an error code
        }
        int j = 0;
        char pI[4]; //test case number
        while(str[j] != ' ')
        {
            pI[j] = str[j];
            j++;
        }
        j++; //now on first num of the fraction (p)
        
        int tcNum;
        // for(int idx = 0; idx < 4; idx++)
        // {
        //     printf("%d \n", pI[idx]);
        // }
        
        // while(idx >= 0)
        // {
        //     sscanf()
        // }
        
        sscanf(pI, "%d", &tcNum);
        printf("%d ", tcNum);
        char substr[100];
        memcpy(substr,&str[j], 100);
        int nume;
        int deno;
        sscanf(substr,"%d",&nume);
        sscanf(&substr[iLength(nume)+1],"%d",&deno);
        int ans = 0;
        int pow2 = 1;
        //printf("nume = %d, deno = %d\n", nume, deno);
        while(nume != 1 || deno != 1)
        {
            if(nume < deno)
            {
                deno = deno - nume;
            }
            else
            {
                nume = nume - deno;
                ans += pow2;
            }
            pow2 =  pow2 * 2;
        }
        
        ans += pow2;
        printf("%d\n",ans);
        
    }
    //printf("Hello World");

    return 0;
}

