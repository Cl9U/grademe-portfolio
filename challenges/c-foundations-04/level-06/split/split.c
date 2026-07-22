#include <stdio.h>
#include <stdlib.h>

int is_charset(char c, char *charset)
{
    int i;

    i = 0;
    while(charset[i])
    {
        if (charset[i] == c)
            return (1);
        i++;    
    }
    return (0);
}
int count_words(char *str,char *charset)
{
    int count;
    int in_word;

    count = 0;
    in_word = 0;
    while(*str)
    {
        if(!is_charset(*str, charset))
        {
            if(!in_word)
            {
                count++;
                in_word = 1;
            }
        }
        else
            in_word = 0;
        str++;
    }
    return (count);
}

int word_len(char *str, char *charset)
{
    int len;

    len = 0;
    while(str[len] && !is_charset(str[len], charset))
        len++;
    return(len);
}

char *get_word(char *str, int len)
{
    char *word;
    int i;

    word = malloc((len + 1) * sizeof(char));
     if (!word)
		return (NULL);
    i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **split(char *str, char *charset)
{
    int len;
    char **strs;
    int i;
    
    strs = malloc((count_words(str, charset) + 1) * sizeof(char *));
    if (!strs)
		return (NULL);
	i = 0;
    while(*str)
    {
        if(!is_charset(*str, charset))
        {
            len = word_len(str, charset);
            strs[i] = get_word(str,len);
            i++;
            str += len;
        }
        else
        str++;
    }
    strs[i] = 0;
    return (strs);
}