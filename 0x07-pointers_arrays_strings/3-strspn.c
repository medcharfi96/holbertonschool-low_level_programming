nt i =0;
int j = 0;
int v;
unsigned int k;
int tr = 1;
char x [500];
for (int v = 0; *(accept+v) != '\0' ; v++)
 {
   x[v]= accept [v];
   }
    while (*(accept+i) != '\0')
{
       for ( v = 0 ; x[v] != '\0'; v++) 
    
        {
        if  (accept[i]== x[v])
        { 
            tr =0;
        }
        }
    if  (tr ==1)
    {
        for (j = 0;*(s+j) != '\0';j++)
            {
            if (s[j]==accept[i])
     {
         k++;
     }
                
            }
    }
     else
     {
    i++;
        }
}   
}
return(k);
}
