int main()
{
    char t[100];
    int i;
    int countL,countU,countS;
 
    printf("Enter any string:");
    scanf("%c",&t);
    countL=countU=countS=0;
    for(i=0;t[i]!='\0';i++)
    {
        if((t[i]>='A' && t[i]<='Z') || (t[i]>='a' && t[i]<='z'))
        {
            if((t[i]>='A' && t[i]<='Z'))
            {
                
                countU++;
            }
            else
            {
            
                countL++;
            }
        }
        else
        {
        
            countS++; 
        }
    }
    printf("lower case characters:  %d \n",countL);
    printf("upper case characters: %d \n",countU);
    printf("special characters:  %d \n",countS);
 
    return 0;
}
