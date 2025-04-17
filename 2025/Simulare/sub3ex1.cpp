//made by Vlad
void harsad(int k,int &n)
{
    for(int i=k;i>=1;i--)
    {
        int s=0,u,aux;
        aux=i;
        while(i)
        {
            u=i%10;
            i=i/10;
            s+=u;
        }
        if(aux%s==0)
        {
            n=aux;
           break;
        }
        i=aux;
    }
}