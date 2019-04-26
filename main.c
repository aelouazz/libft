#include "libft.h"
#include <stdio.h>

// //==================  ft_striter Parameter TEST ======================
// void		shift_one(char *s)
// {
// 	*s += 1;
// }


// //==================  ft_striteri Parameter TEST ======================
// this is a cripto algorithm that shift the char                        |
// with its index in the string                                          |
// void		shift_index(unsigned int i, char *s)
// {
// 	*s += i;
// }


// //==================  ft_strmap Parameter TEST ======================
// char	map_shift(char c)
// {
// 	char ret;
// 	ret = c + 1;
// 	return(ret);
// }


// //==================  ft_strmapi Parameter TEST ======================
// this is a cripto algorithm that shift the char                       |
// with its index in the string                                         |
// char	mapi_shift(unsigned int i,char c)
// {
// 	char ret;
// 	ret = c + i;
// 	return (ret);
// }



int			main(void)
{
	// //==================  ft_memset TEST ======================
	// char s[10];
	// ft_memset((void*)s,'a',9);
	// printf("%s",s);

	// //==================  ft_bzero TEST ======================
	// char s[] = "aymane";
	// ft_bzero((void*)s+1,1);
	// printf("%s\n",s);
	// printf("%s\n",s+2);
	// return (0);

	// //==================  ft_memcpy TEST ======================
	// char s[10];
	// ft_memcpy((void*)s,"aymane",6);
	// s[6] = '\0';
	// printf("%s\n",s);

	// //==================  ft_memccpy TEST ======================
	// char s[] = "aymane";
	// char s2[10];
	// char *sec_a_position;
	// sec_a_position = (char*)ft_memccpy(s2, s, (int)'m', 6);
	// printf("%s\n",s2);

	// //==================  ft_memmove TEST ======================
	// char s[10] = "aymane";
	// char *s2 = s + 3;
	// //ft_memcpy((void*)s2,(void*)s,6); // this one overlap
	// ft_memmove((void*)s2,(void*)s,6);
	// printf("%s\n",s2);

	// //==================  ft_memchr TEST ======================
	// char s[10] = "aymane";
	// void *s2 = ft_memchr((void*)s,'m',6);
	// printf("%s\n",(char *)s2);

	// //==================  ft_memcmp TEST ======================
	// char s1[] = "hello";
	// char s2[] = "hello";
	// printf("ft:		%d\n",ft_strcmp((void*)s1,(void*)s2));
	// printf("original	%d\n",strcmp((void*)s1,(void*)s2));

	// //==================  ft_strdup TEST ======================
	// char s[] = "aymane";
	// char *res = ft_strdup(s);
	// printf("%s", res);

	// //==================  ft_strcpy TEST ======================
	// char	s[10] = "aymane";
	// char	s2[10];
	// ft_strcpy(s2,s);
	// printf("%s\n",s2);

	// //==================  ft_strncpy TEST ======================
	// char	s[10] = "aymane";
	// char	s2[10];
	// ft_strncpy(s2,s,3);
	// printf("%s\n",s2);

	// //==================  ft_strcat TEST ======================
	// char	s[30] = "-----\naymane ";
	// char	s2[] = "is awesome\n-----";
	// ft_strcat(s,s2);
	// printf("%s\n",s);

	// //==================  ft_strncat TEST ======================
	// char	s[30] = "-----\naymane ";
	// char	s2[] = "is awesome\n-----"; // the last \n is skipped
	// ft_strncat(s,s2,10);
	// printf("%s\n",s);

	// //==================  ft_strlcat TEST ======================
	// char	s[30] = "aymane ";
	// char	s2[] = "is awesome";
	// char	s3[30] = "aymane ";
	// char	s4[] = "is awesome";
	// printf("ft_       > %lu\n",ft_strlcat(s,s2,30));
	// printf("original  > %lu\n",strlcat(s3,s4,30));

	// //==================  ft_strchr TEST ======================
	// char s[] = "aymane";
	// char *s2 = ft_strchr(s,'m');
	// printf("%s", s2);

	// //==================  ft_strrchr TEST ======================
	// char s[] = "aymane";
	// char *s2 = ft_strrchr(s,'b');
	// if (!s2) {
	// 	printf("the return is NULL");
	// 	return (0);
	// }
	// printf("%c",*s2);

	// //==================  ft_strstr TEST ======================
	// char s[] = "aymane";
	// char s2[] = "an";
	// printf("%s", ft_strstr(s, s2));

	// //==================  ft_strnstr TEST ======================
	// char s[] = "aymane";
	// char s2[] = "an";
	// printf("ft_       > %s\n", ft_strnstr(s, s2, 5));
	// printf("original  > %s\n", strnstr(s, s2, 5));

	// //==================  ft_strcmp TEST ======================
	// char s[] = "aymane";
	// char s2[] = "aymane";
	// printf("ft_       > %d\n", ft_strcmp(s, s2));
	// printf("original  > %d\n", strcmp(s, s2));

	// //==================  ft_strncmp TEST ======================
	// char s[] = "aymane";
	// char s2[] = "ayaane";
	// printf("ft_       > %d\n", ft_strncmp(s, s2, 2));
	// printf("original  > %d\n", strncmp(s, s2, 2));

	// //==================  ft_atoi TEST ======================
	// char s[] = "    -12223jkfnasdkf";
	// printf("ft_       > %d\n",ft_atoi(s));
	// printf("original  > %d\n",atoi(s));

	// //==================  ft_memalloc TEST ======================
	// char *s = (char*)ft_memalloc(10);
	// ft_strcpy(s,"aymane iss");
	// printf("%s",s);

	// //==================  ft_memdel TEST ======================
	// char *s = (char*)ft_memalloc(10);
	// char **s2 = &s;
	// ft_strcpy(s,"aymane iss");
	// printf("allocated  > %s\n",*s2);
	// ft_memdel((void**)s2);
	// printf("freed      > %s\n",*s2);

	// //==================  ft_strnew TEST ======================
	// char *s = ft_strnew(7);
	// ft_strcpy(s, "aymane");
	// printf("%s",s);

	// //==================  ft_strdel TEST ======================
	// char *s = ft_strnew(7);
	// char **s2 = &s;
	// ft_strcpy(s, "aymane");
	// printf("allocated  > %s\n",*s2);
	// ft_strdel(s2);
	// printf("freed      > %s\n",*s2);

	// //==================  ft_strclr TEST ======================
	// char *s = ft_strnew(7);
	// ft_strcpy(s, "aymane");
	// printf("filled   > %s\n",s);
	// ft_strclr(s);
	// printf("cleared  > %s\n",s);

	// //==================  ft_striter TEST ======================
	// char s[] = "abc";
	// printf("before iterating: >%s\n",s);
	// ft_striter(s,&shift_one);
	// printf("before iterating: >%s\n",s);
	// return (0);

	//==================  ft_striteri TEST ======================
	// char s[] = "abc";
	// printf("before iterating: >%s\n",s);
	// ft_striteri(s,&shift_index);
	// printf("after iterating : >%s\n",s);

	//==================  ft_strmap TEST ======================
	// char s[] = "abc";
	// printf("before mapping : >%s\n",s);
	// char *fresh = ft_strmap(s,&map_shift);
	// printf("after mapping  : >%s\n",fresh);

	//==================  ft_strmapi TEST ======================
	// char s[] = "abc";
	// printf("before mapping : >%s\n",s);
	// char *fresh = ft_strmapi(s,&mapi_shift);
	// printf("after mapping  : >%s\n",fresh);

	//==================  ft_strequ TEST ======================
	// char s[10] = "aymane";
	// char s2[10] = "aymane";
	// printf("identical        > %d\n", ft_strequ(s,s2));
	// s[3] = 'm';
	// printf("not idenical     > %d\n", ft_strequ(s,s2));

	//==================  ft_strnequ TEST ======================
	// char s[10] = "aymane";
	// char s2[10] = "aymane";
	// printf("identical        > %d\n", ft_strnequ(s,s2,4));
	// s[3] = 'm';
	// printf("not idenical     > %d\n", ft_strnequ(s,s2,4));


	//==================  ft_strsub TEST ======================
	// char s[] = "aymane";
	// char *s2 = ft_strsub(s,0,2);
	// printf("String      > %s\n",s);
	// printf("Sub-string  > %s\n",s2);

	//==================  ft_strjoin TEST ======================
	// char s1[] = "aymane ";
	// char s2[] = "is amazing";
	// char *result = ft_strjoin(s1,s2);
	// printf("Joined Strings :::> %s\n",result);


	//==================  ft_strtrim TEST ======================
	// char s[] = "   \t Aymane is awesome   .     \n\t";
	// char *result = ft_strtrim(s);
	// printf("result:====> |%s|",result);







	return (0);
}
