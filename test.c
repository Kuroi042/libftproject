    int len;
    len = ft_strlen((char*)s);
    size_t i = 0;
    unsigned char x = (int)c;  
    char *str = (char*)s;
    
    while(i<=len)
    {
      
         if (str[i]== x)
    {
            return (const char*) (str+i);
    }
        i++;
    }
    return NULL;