#include "libmx.h"

//static bool mx_cmp(void *a, void *b) {
//    if((int) a > (int) b)
//        return 1;
//    else
//        return 0;
//}

int main() {


	//    ---------------------------------/*UTILS PACK*/----------------------     //


//    printf("----------------------------------MX_PRINTCHAR----------------------\n");
//        char c = 'q';
//        mx_printchar(c);
//    printf("\n---------------------------------MX_PRINT_UNICODE----------------------\n");
//        mx_print_unicode(36); mx_printchar('\n');
//        mx_print_unicode(567); mx_printchar('\n');
//        mx_print_unicode(34678); mx_printchar('\n');
//        mx_print_unicode(66435); mx_printchar('\n');
//        mx_print_unicode(1122); mx_printchar('\n');
//        mx_print_unicode(128047); mx_printchar('\n');
//        mx_print_unicode(129426); mx_printchar('\n');
//        mx_print_unicode(2046); mx_printchar('\n');
//        mx_print_unicode(2050); mx_printchar('\n');
//        mx_print_unicode(134); mx_printchar('\n');
//        mx_print_unicode(4055); mx_printchar('\n');
//    printf("\n----------------------------------MX_PRINTSTR----------------------\n");
//        char str[] = "qwerty";
//        mx_printstr(str);
//    printf("\n----------------------------------MX_PRINTSTRARR----------------------\n");
//        char* arr[] = {"4567", "456789", "afdsF", NULL};
//        char del[] = " ";
//        mx_print_strarr(arr, del);
//    printf("\n----------------------------------MX_PRINTINT----------------------\n");
//        int n = 123412523;
//        mx_printint(n);
//    printf("\n----------------------------------MX_POW----------------------\n");
//        printf("%f", mx_pow(3, 4));
//    printf("\n----------------------------------MX_SQRT----------------------\n");
//        printf("%d", mx_sqrt(144));
//    printf("\n----------------------------------MX_NBR_TO_HEX----------------------\n");
//        printf("%s", mx_nbr_to_hex(1000));
//    printf("\n----------------------------------MX_HEX_TO_NBR----------------------\n");
//        char *hex = "FADE";
//        printf("%lu", mx_hex_to_nbr(hex));
//    printf("\n----------------------------------MX_ITOA----------------------\n");
//        printf("%s", mx_itoa(-2147483648));
//        printf("%s", mx_itoa(5051));
//        printf("%s", mx_itoa(0));
//    printf("\n----------------------------------MX_FOREACH----------------------\n");
//        int s[] = {1, 3, 4, 5, 6};
//        mx_foreach(s, 5, mx_printint);
//    printf("\n----------------------------------MX_BINARY_SEARCH----------------------\n");
//        char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//        int count = 0;
//        printf("%d", mx_binary_search(arr, 6, "ab", &count));
//        printf("  %d\n", count);
//        printf("%d", mx_binary_search(arr, 6, "aBc", &count));
//        printf("  %d\n", count);
//        printf("%d", mx_binary_search(arr, 6, "aBz", &count));
//        printf("  %d\n", count);
//    printf("\n----------------------------------MX_BUBBLE_SORT----------------------\n");
//        char *arr[] = {"abc", "xyz", "ghi", "def"};
//        printf("%d\n", mx_bubble_sort(arr, 4));
//        char *arr1[] = {"abc", "acb", "a"};
//        printf("%d", mx_bubble_sort(arr1, 3));
//    printf("\n----------------------------------MX_QUICKSORT----------------------\n");
//     char *arr_quick[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
//     int count_quick = mx_quicksort(arr_quick, 0, 3);
//     printf("%d\n", count_quick);
//     for (int i = 0; i < 4; i++)
//         printf("%s\n", arr_quick[i]);
//
//     char *arr1_quick[] = {"DMC", "Clint Eastwood", "Dr Brown", "Einstein", "Jessica", "Biff Tannen"};
//     int count1_quick = mx_quicksort(arr1_quick, 0, 5);
//     printf("%d\n", count1_quick);
//     for (int i = 0; i < 6; i++)
//         printf("%s\n", arr1_quick[i]);
//
//     char *arr_x[] = {"sh1 2cmHHB8sLNW6",
//                      "mzzaT6euQk",
//                      "  1QPp  TrHdJ",
//                      "Rp3yM9ULFo2tIx",
//                      "2al0rOnF1fPEhx8",
//                      "   pPlALd2nv",
//                      "dPA4tDWNMP",
//                      "s5oVwbyY5AGfn18nk",
//                      "YtoTeo2ZsvPatqkPd  5",
//                      "Gwoj13RsP54 8O",
//                      "T8m V0jeMY1Uj7GX",
//                      "QznGCNEc4o",
//                      "d4g3ogpmCM2NWyfBUa",
//                      "U  L9aitSY8SqNW",
//                      "nImrhTZ6VX2ccD2",
//                      "dS90H3wbPRZiWCDvofxf",
//                      "KUTaUPXRIfeWyKS",
//                      "D9DuyiPmhn",
//                      "N2h0fv8A3KvDuR6",
//                      "GGKBJTtWJhfJ8y0g",
//                      "Zdmy2   kqIYov7mg517",
//                      "   8MjhlX lbse",
//                      "dgd tdfK    15Oc O9z6G",
//                      "wbUj67zdEaHFwTLf",
//                      "GyeL0Dphbj9TDkulc",
//                      "t0C26SUTGW1NF Ow7AH",
//                      "   I8wXo2AH9x",
//                      "biTXR4x3MM4Jn",
//                      "BSJ2gbZ7ngWyKLPh4WG",
//                      "  PAW1tmj7pPZ",
//                      "FRLx6eG0xxF11   TZ",
//                      "zMfFYH01",
//                      "iUYJZMd9AY9Rn",
//                      "JpEGFgonw",
//                      "JGz 1GoR4sT8vo",
//                      "kqIYov7mg517",
//                      "zP3YaZ2YhS70KWuAl",
//                      "dY5s5G0 IBbAJf2WtUu",
//                      "4fhwxKNI9ZUzvT",
//                      "iLKeqVRBS",
//                      "2kEkMk3trwyDdeic G",
//                      "vF5iBXg21mMy5r",
//                      "f k  a0s33mh0    ZQ",
//                      "b 1gHsw3MUgHniKh",
//                      "yyLMylI1eqm SoOu6uxG",
//                      "nxFhzHEmUa7Blo",
//                      "WcIHu36RwQAvxb1VQ",
//                      "toIF0Lo6dil9y2XO0",
//                      "g8pRaAf4x35H9",
//                      "dc0sEDcsxJYn6",
//                      "v  3ilYe4tq9H",
//                      "tyBJnea J ",
//                      "   baCr",
//                      "CGDC775R",
//                      "G6ZpwQ3MKWbixW",
//                      "WKkCjOYkyzAUfILsIdHg",
//                      "v41MQ9YxrYG4Ot",
//                      "hcjOrVsE5",
//                      "AXCs9giIZ93 giC ons",
//                      "OHmyRuN6JUa2o",
//                      " JsMOw MF z2Ht",
//                      "BCqRcwwSr3",
//                      "sJOOonVJMBAblJM    ",
//                      "9nXhS72u9Ap RKX",
//                      "9PsPtfyIE XHevg",
//                      "qann6ywHfbX",
//                      "NKxbStcEwBG",
//                      "QpAUp7NzPbJcRzHexx ",
//                      "45rXr ATF2VEsn",
//                      "pEg47yOqQXO1R",
//                      "VLUOYcTiy9Rrp1nFc1",
//                      "zSZHqte1v2sfe",
//                      "pR4hjTQFJtElUoeBC",
//                      "8Da KNB1TP3mc",
//                      "iSXXMiwU IFSPcqb17oM",
//                      "PY2INvibcpF",
//                      "q9CNYOEYxvCB",
//                      "we ugIeWWP7RX8G",
//                      "Ac1f kSYkcBfj9ll",
//                      "TuweyM FWHDM0M28C",
//                      "W0qKPDH9NanR",
//                      " 0 WPc4R9PfMU5l",
//                      "  vkFwWCKMoS",
//                      "gdRTYp9Ah4I2JV",
//                      "ttjXKrYs9kYwyo",
//                      "7IoLCoABlQwS1m",
//                      "yrJ8IP7Xn  W dCI ozK",
//                      "1ZdN45zdcCKBiu4",
//                      "R4pCwi8XGaGxB",
//                      "Tib1L0CX5gvKACC5",
//                      "LWMOw4BbC5Nx",
//                      "OOZx6TDcl9MbPGOAqS",
//                      "l 1wtjbE3p80",
//                      "GbwhhKxKkq",
//                      "kax4NZB9XKG",
//                      "pFeWRk70J98UuD ",
//                      "VXdkB65eMHRKiTrI",
//                      "7b57MsawFn4mJ",
//                      "4WExjCDhAZ",
//                      "cH  4UdsS8A7yzL8ec",
//                      "4XfIyKnrwi7F",
//                      "H6zacnow0F5vP    "};
// int count_x = mx_quicksort(arr_x, 2, 101);
// printf("\nswap = %d\n", count_x);
// for (int i = 0; i < 101; i++)
//     printf("%s\n", arr_x[i]);


//    ---------------------------------/*STRING PACK*/----------------------    //


//    printf("\n----------------------------------MX_STRLEN----------------------\n");
//        char len[] = "qwerty";
//        printf("%d", mx_strlen(len));
//    printf("\n----------------------------------MX_SWAP_CHAR----------------------\n");
//        char str[] = "ONE";
//        mx_swap_char(&str[0], &str[1]);
//        printf("%s\n", str);
//        mx_swap_char(&str[1], &str[2]);
//        printf("%s", str);
//    printf("\n----------------------------------MX_STR_REVERSE----------------------\n");
//        char s[] = "game over";;
//        mx_str_reverse(s);
//        printf("%s", s);
//    printf("\n----------------------------------MX_STRDEL----------------------\n");
//        char *str_del[] = {"23fa", "gfdj", "gdffd"};
//        for (int i = 0; i < 3; i++) {
//            mx_printstr(str_del[i]);
//            mx_printchar(' ');
//        }
//        *str_del = mx_strnew(4);
//        mx_printstr("\nAFTER");
//        mx_strdel(str_del);
//        printf("\n%s\n", *str_del);
//    printf("\n----------------------------------------------------Mx_Del_Strarr----------------------------------------------------\n");
//          char **strarr = (char **)malloc(sizeof(char *) * 3);
//          strarr[0] = strdup("abc"); strarr[1] = strdup("xyz"); strarr[2] = NULL;
//          mx_printstr("strarr before mx_del_strarr is abc  xyz  (null)? | "); printf("%s  %s  %s\n", strarr[0], strarr[1], strarr[2]);
//          mx_del_strarr(&strarr);
//          mx_printstr("strarr after mx_del_strarr is (null)? | "); printf("%s\n", (char *) strarr);
//          mx_printchar('\n');
//    printf("\n----------------------------------MX_GET_CHAR_INDEX----------------------\n");
//          char *arr = "qwerty";
//          char c = 'o';
//          printf("%d", mx_get_char_index(arr, c));
//    printf("\n----------------------------------MX_STRDUP----------------------\n");
//        char *str1_dup  = "dasdasgefea";
//        printf("my own %s\n", mx_strdup(str1_dup));
//        printf("original %s\n", strdup(str1_dup));
//    printf("\n----------------------------------MX_STRNDUP----------------------\n");
//        char *str1_ndup = "Antoha";
//        char *str2_ndup = "ANTON";
//        printf("my - %s\n", mx_strndup(str1_ndup, 3));
//        printf("orig - %s\n", strndup(str1_ndup, 3));
//        printf("my - %s\n", mx_strndup(str2_ndup, -3));
//        printf("orig - %s\n", strndup(str2_ndup, -3));
//    printf("\n----------------------------------MX_STRCPY----------------------\n");
//        const char *s = "yo, dude";
//        char s1[] = "";
//        mx_strcpy(s1, s);
//        printf("%s", s1);
//    printf("\n----------------------------------MX_STRNCPY----------------------\n");
//        const char s[9] = "yo, dude";
//        char s1[1567] = "";
//        mx_strncpy(s1, s, 467);
//        printf("%s", s1);
//    printf("\n----------------------------------MX_STRCMP----------------------\n");
//        char *s = "dasfasf";
//        char *s1 = "qwerty";
//        printf("my %d\n", mx_strcmp(s, s1));
//        printf("original %d\n", strcmp(s, s1));
//    printf("\n----------------------------------MX_STRCAT----------------------\n");
//        char str1_cat[] = "Yo, ";
//        const char *str2_cat = "dude";
//        printf("%s\n", mx_strcat(str1_cat, str2_cat));
//    printf("\n----------------------------------MX_STRSTR----------------------\n");
//        char s1[] = "roflandudoslsfdg";
//        char s2[] = "dudos";
//        printf("my %s\n", mx_strstr(s1, s2));
//        printf("original %s\n", strstr(s1, s2));
//    printf("\n----------------------------------MX_GET_SUBSTR_INDEX----------------------\n");
//        char *str = "McDonalds";
//        char *sub = "Don";
//        printf("%d\n", mx_get_substr_index(str, sub));
//        char *str1 = "McDonalds Donuts";
//        char *sub1 = "on";
//        printf("%d\n", mx_get_substr_index(str1, sub1));
//        char *str2 = "McDonalds";
//        char *sub2 = "Donatello";
//        printf("%d\n", mx_get_substr_index(str2, sub2));
//    printf("\n----------------------------------MX_GET_SUBSTR_INDEX----------------------\n");
//        char str1[] = "yo, yo, yo Neo";
//        char str2[] = "";
//        printf("%d\n", mx_count_substr(str1, str2));
//        printf("%d\n", mx_count_substr(str1, NULL));
//        printf("%d\n", mx_count_substr(NULL, str2));
//    printf("\n----------------------------------MX_COUNT_WORDS----------------------\n");
//       char str_count_words[]= "  follow  *   the  white rabbit ";
//       printf("%d\t", mx_count_words(str_count_words, '*')); printf("return - 2\n");
//       printf("%d\t", mx_count_words(str_count_words, ' ')); printf("return - 5\n");
//       printf("%d\t", mx_count_words(NULL, ' ')); printf("return - -1\n");
//    printf("\n----------------------------------MX_STRTRIM----------------------\n");
//       char *name_trim = NULL;
//       printf("%s\n", mx_strtrim(name_trim));
//       char *name1_trim = "\f                      \t                  \n";
//       printf("%s\n", mx_strtrim(name1_trim));
//       char *name2_trim = "\f     My name        ...      is         Neo  \t\n";
//       printf("%s\n", mx_strtrim(name2_trim));
//    printf("\n----------------------------------MX_DEL_EXTRA_SPACES----------------------\n");
//        char *str = "\f   yo bro   dude\n \r    \nwasapp  \t\n  ";
//        printf("%s", mx_del_extra_spaces(str));
//    printf("\n---------------------------------MX_STRSPLIT----------------------\n");
//         char **str_split = mx_strsplit("sdadasa * dasd ***** dadssd", '*');
//         if (str_split != NULL)
//         for (int i = 0; str_split[i]; i++)
//             printf("%s\n", str_split[i]);
//         char *s_split = "**Good bye,**Mr.*Anderson.****";
//         char **res_split;
//         char delimetr_split = '*';
//
//         res_split = mx_strsplit("**Good bye,**Mr.*Anderson.****", '*');
//         for(int i = 0; i < mx_count_words(s_split, delimetr_split); i++)
//             printf("%s\n", res_split[i]);
//    printf("\n---------------------------------MX_STRJOIN----------------------\n");
//         char *s1 = "ku";
//         char *s2 = " ku";
//         printf("%s\n", mx_strjoin(s1, s2));
//    printf("\n---------------------------------MX_FILE_TO_STR----------------------\n");
//         printf("%s", mx_file_to_str("fragment"));
//    printf("\n---------------------------------MX_REPLACE_SUBSTR----------------------\n");
//        char *str = "Ururu turu";
//        char *sub = "ru";
//        char *replace = "ta";
//        printf("%s", mx_replace_substr(str, sub, replace));
    printf("\n---------------------------------MX_READ_LINE----------------------\n");
	    int fd = open("fragment", O_RDONLY);
	    char *lineptr1 = NULL;
	    int res1;
	    res1 = mx_read_line(&lineptr1, 7, '\n', fd);
	    printf("%d\n%s\n", res1, lineptr1);
	    printf("==============================================\n");
		char *lineptr2 = NULL;
		int res2;
		res2 = mx_read_line(&lineptr2, 35, 'a', fd);
		printf("%d\n%s\n", res2, lineptr2);
		printf("==============================================\n");
		char *lineptr3 = NULL;
		int res3;
		res3 = mx_read_line(&lineptr3, 1, '.', fd);
		printf("%d\n%s\n", res3, lineptr3);
		printf("==============================================\n");
		char *lineptr4 = NULL;
		int res4;
		res4 = mx_read_line(&lineptr4, 10, '\n', fd);
		printf("%d\n%s\n", res4, lineptr4);
		printf("==============================================\n");
	    close(fd);
	    mx_printstr("\n");


//    ---------------------------------/*MEMORY PACK*/----------------------    //


//    printf("\n---------------------------------MX_MEMSET----------------------\n");
//        char *s = mx_strdup(NULL);
//        printf("%s", mx_memset(s, '1', 5));
//    printf("\n---------------------------------MX_MEMCPY----------------------\n");
//        char src_memcpy[] = "Hello World";
//        char *dest_memcpy = NULL;
//        dest_memcpy = mx_strnew(mx_strlen(src_memcpy));
//        mx_memcpy(dest_memcpy, src_memcpy, strlen(src_memcpy)+1);
//        printf(" MY - The copied string is %s\n", dest_memcpy);
//        char src1_memcpy[] = "Hello World";
//        char dest1_memcpy[100];
//        memcpy(dest1_memcpy, src1_memcpy, strlen(src1_memcpy)+1);
//        printf(" Orig - The copied string is %s\n", dest1_memcpy);
//        int arr_memcpy[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//        int n_memcpy = sizeof(arr_memcpy)/sizeof(arr_memcpy[0]);
//        int dest_arr_memecpy[n_memcpy], i;
//        mx_memcpy(dest_arr_memecpy, arr_memcpy, sizeof(arr_memcpy));
//        printf("The copied array is MY ");
//        for (i = 0; i < n_memcpy; i++)
//            printf("%d ", dest_arr_memecpy[i]);
//
//        int arr1_memcpy[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//        int n1_memcpy = sizeof(arr1_memcpy)/sizeof(arr1_memcpy[0]);
//        int dest_arr1_memcpy[n1_memcpy], i1_memcpy;
//        mx_memcpy(dest_arr1_memcpy, arr1_memcpy, sizeof(arr1_memcpy));
//        printf("\nThe copied array is ORIG ");
//        for (i1_memcpy = 0; i1_memcpy < n1_memcpy; i1_memcpy++)
//            printf("%d ", dest_arr1_memcpy[i1_memcpy]);
//        mx_printchar('\n');
//    printf("\n---------------------------------MX_MEMCCPY----------------------\n");
//        char src_memccpy[] = "Hello World";
//        char dest_memccpy[100];
//        mx_memccpy(dest_memccpy, src_memccpy, 'l', strlen(src_memccpy));
//        printf("MY - The copied string is %s\n", dest_memccpy);
//
//        char src1_memccpy[] = "Hello World";
//        char dest1_memccpy[100];
//        mx_memccpy(dest1_memccpy, src1_memccpy, 'l', strlen(src1_memccpy));
//        printf("Orig - The copied string is %s\n", dest1_memccpy);
//
//        int arr_memccpy[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//        int n_memccpy = sizeof(arr_memccpy)/sizeof(arr_memccpy[0]);
//        int dest_arr_memccpy[n_memccpy], i_memccpy;
//        mx_memccpy(dest_arr_memccpy, arr_memccpy, 50, sizeof(arr_memccpy));
//        printf("The copied array is MY ");
//        for (i_memccpy = 0; i_memccpy < n_memccpy; i_memccpy++)
//            printf("%d ", dest_arr_memccpy[i_memccpy]);
//
//        int arr1_memccpy[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//        int n1_memccpy = sizeof(arr1_memccpy)/sizeof(arr1_memccpy[0]);
//        int dest_arr1_memccpy[n1_memccpy], i1_memccpy;
//        memccpy(dest_arr1_memccpy, arr1_memccpy, 50, sizeof(arr1_memccpy));
//        printf("\nThe copied array is ORIG ");
//        for (i1_memccpy = 0; i1_memccpy < n1_memccpy; i1_memccpy++)
//            printf("%d ", dest_arr1_memccpy[i1_memccpy]);
//        mx_printchar('\n');
//
//        char memccpy_dest1[10] = "123456789";
//        char memccpy_dest2[10] = "123456789";
//        mx_printstr("memccpy    return\t    | "); mx_printstr(memccpy(memccpy_dest1, "54321", '3', 8));
//        mx_printstr("|\nmx_memccpy return the same? | "); mx_printstr(mx_memccpy(memccpy_dest2, "54321", '3', 8)); mx_printstr("|\n");
//        printf("dst after memccpy    is | %s|\ndst after mx_memccpy is | %s|\n", memccpy_dest1, memccpy_dest2);
//        printf("memccpy    return\t    | %s|\n", memccpy(memccpy_dest1, "54321", 'a', 8));
//        printf("mx_memccpy return the same? | %s|\n", mx_memccpy(memccpy_dest2, "54321", 'a', 8));
//    printf("\n---------------------------------MX_MEMCPY----------------------\n");
//        char src_memcmp[] = "BBCBABAS";
//        char dest_memcmp[] = "qwe";
//        printf("My - %d\n", mx_memcmp(dest_memcmp, src_memcmp, 2));
//
//        char src1_memcmp[] = "BBCBABAS";
//        char dest1_memcmp[] = "qwe";
//        printf("Orig - %d\n", memcmp(dest1_memcmp, src1_memcmp, 2));
//    printf("\n---------------------------------MX_MEMCHR----------------------\n");
//         char src_memchr[] = "Hello World";
//         char *d_memchr = (char *) mx_memchr(src_memchr, 'l', -2);
//         printf(" MY - Str is %s\n", d_memchr);
//         printf(" Original - Str is %s\n", d_memchr);
//    printf("\n---------------------------------MX_MEMRCHR----------------------\n");
//         char src_memrchr[] = "Hello World";
//         char *d_memrchr = (char *) mx_memrchr(src_memrchr, 'o', 10);
//         printf(" MY - Str is %s\n", d_memrchr);
//
//         char src1_memrchr[] = "Trinity";
//         char *d1_memrchr = (char *) mx_memrchr(src1_memrchr, 'i', 7);
//         printf(" MY - Str is %s\n", d1_memrchr);
//
//         char src2_memrchr[] = "Trinity";
//         char *d2_memrchr = (char *) mx_memrchr(src2_memrchr, 'M', 7);
//         printf(" MY - Str is %s\n", d2_memrchr);
//    printf("\n---------------------------------MX_MEMMEM----------------------\n");
//         char *big_memem = "Hello my name is Neo";
//         char *little_memem = "my";
//         char *res_memem = (char *) mx_memmem(big_memem, mx_strlen(big_memem), little_memem, mx_strlen(little_memem));
//         printf("My res - %s\n", res_memem);
//         printf("Orig res - %s\n", res_memem);
//    printf("\n---------------------------------MX_MEMMOVE----------------------\n");
//         unsigned char src_memmove[10] = "1234567890";
//         printf ("src old: %s\n",src_memmove);
//         memmove (&src_memmove[4], &src_memmove[3], 3);
//         printf ("src new: %s\n",src_memmove);
//
//         unsigned char src1_memmove[10] = "1234567890";
//         printf ("src old: %s\n",src1_memmove);
//         memmove (&src1_memmove[4], &src1_memmove[3], 3);
//         printf ("src new: %s\n",src1_memmove);
//    printf("\n---------------------------------MX_REALLOC----------------------\n");
//          char *ptr1 = NULL;
//          ptr1 = (char *) malloc(17);
//          strcpy(ptr1, "This is 16 chars");
//          printf("Ptr1 result after use LIBC realloc:  |%s|   Pointer address %lu\n", ptr1, (long int)ptr1);
//          ptr1 = realloc(ptr1, 10);
//          printf("Ptr1 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr1, (long int)ptr1);
//
//          char *ptr2 = NULL;
//          ptr2 = (char *) malloc(17);
//          strcpy(ptr2, "This is 16 chars");
//          printf("Ptr2 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr2, (long int)ptr2);
//          ptr2 = mx_realloc(ptr2, 10);
//          printf("Ptr2 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr2, (long int)ptr2);
//
//          char *ptr3 = NULL;
//          ptr3 = (char *) malloc(10);
//          strcpy(ptr3, "123456789");
//          printf("Ptr3 result after use LIBC realloc:  |%s| \t\t\t    Pointer address|%lu|\n", ptr3, (long int)ptr3);
//          ptr3 = realloc(ptr3, 34);
//          mx_strcat(ptr3, "+Added 25 more characters");
//          printf("Ptr3 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr3, (long int)ptr3);
//
//          char *ptr4 = NULL;
//          ptr4 = (char *) malloc(10);
//          strcpy(ptr4, "123456789");
//          printf("Ptr4 result after use MY mx_realloc: |%s| \t\t\t    Pointer address|%lu|\n", ptr4, (long int)ptr4);
//          ptr4 = mx_realloc(ptr4, 34);
//          mx_strcat(ptr4, "+Added 25 more characters");
//          printf("Ptr4 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr4, (long int)ptr4);
//
//          char *ptr5 = NULL;
//          ptr5 = (char *) malloc(10);
//          printf("Ptr5 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr5, (long int)ptr5);
//          ptr5 = realloc(ptr5, 17);
//          printf("Ptr5 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr5, (long int)ptr5);
//
//          char *ptr6 = NULL;
//          ptr6 = (char *) malloc(10);
//          printf("Ptr6 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr6, (long int)ptr6);
//          ptr6 = realloc(ptr6, 17);
//          printf("Ptr6 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr6, (long int)ptr6);
//
//          char *ptr7 = NULL;
//          ptr7 = (char *) malloc(10);
//          strcpy(ptr7, "XXXXXXXXX");
//          printf("Ptr7 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr7, (long int)ptr7);
//          ptr7 = realloc(ptr7, 0);
//          printf("Ptr7 result after use LIBC realloc:  |%s|   \t   Pointer address|%lu|\n", ptr7, (long int)ptr7);
//
//          char *ptr8 = NULL;
//          ptr8 = (char *) malloc(10);
//          strcpy(ptr8, "XXXXXXXXX");
//          printf("Ptr8 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr8, (long int)ptr8);
//          ptr8 = mx_realloc(ptr8, 0);
//          printf("Ptr8 result after use MY mx_realloc: |%s|   \t   Pointer address|%lu|\n\n", ptr8, (long int)ptr8);
//
//          char *ptr9 = NULL;
//          ptr9 = (char *) malloc(10);
//          strcpy(ptr9, "123456789");
//          printf("Ptr9 result after use LIBC realloc:   |%s|  Pointer address|%lu|\n", ptr9, (long int)ptr9);
//          ptr9 = realloc(ptr9, -1);
//          printf("Ptr9 result after use LIBC realloc:   |%s|     Pointer address|%lu|\n", ptr9, (long int)ptr9);
//
//          char *ptr10 = NULL;
//          ptr10 = (char *) malloc(10);
//          strcpy(ptr10, "123456789");
//          printf("Ptr10 result after use MY mx_realloc: |%s|  Pointer address|%lu|\n", ptr10, (long int)ptr10);
//          ptr10 = mx_realloc(ptr10, -1);
//          printf("Ptr10 result after use MY mx_realloc: |%s|     Pointer address|%lu|\n\n", ptr10, (long int)ptr10);


//    ---------------------------------/*LIST PACK*/----------------------  //


//    printf("\n---------------------------------MX_CREATE_NODE----------------------\n");
//          t_list *list = mx_create_node("KuKu");
//
//          while(list != NULL) {
//              printf("%s", list->data);
//              list = list->next;
//          }
//    printf("\n---------------------------------MX_PUSH_FRONT----------------------\n");
//          t_list *list = mx_create_node("KuKu");
//
//          mx_push_front(&list, "KuKu1");
//
//          while(list != NULL) {
//              printf("%s", list->data);
//              list = list->next;
//          }
//          return 0;
//    printf("\n---------------------------------MX_PUSH_BACK----------------------\n");
//          t_list *list = mx_create_node("KuKu1");
//
//          mx_push_back(&list, "KuKu");
//
//          while(list != NULL) {
//              printf("%s", list->data);
//              list = list->next;
//          }
//          return 0;
//    printf("\n---------------------------------MX_POP_FRONT----------------------\n");
//             char *str_pop_front = "Matrix Push Back";
//             char *str2_pop_front = "Not Matrix";
//             char *str3_pop_front = "Hello neo";
//             t_list *new_list_pop_front = mx_create_node(str_pop_front);
//             mx_push_back(&new_list_pop_front, str2_pop_front);
//             mx_push_back(&new_list_pop_front, str3_pop_front);
//             mx_pop_front(&new_list_pop_front);
//             while(new_list_pop_front != NULL) {
//                 printf("%s", new_list_pop_front->data);
//                 new_list_pop_front = new_list_pop_front->next;
//             }
//    printf("\n---------------------------------MX_POP_BACK----------------------\n");
//             char *str_pop_back = "Matrix Push Back";
//             char *str2_pop_back = "Not Matrix";
//             char *str3_pop_back = "Hello neo";
//             t_list *new_list_pop_back = mx_create_node(str_pop_back);
//             mx_push_back(&new_list_pop_back, str2_pop_back);
//             mx_push_back(&new_list_pop_back, str3_pop_back);
//             mx_pop_back(&new_list_pop_back);
//             while(new_list_pop_back != NULL) {
//                 printf("%s", new_list_pop_back->data);
//                 new_list_pop_back = new_list_pop_back->next;
//             }
//    printf("\n---------------------------------MX_LIST_SIZE----------------------\n");
//             char *str_list_size = NULL;
//             char *str2_list_size = "Not Matrix";
//             char *str3_list_size = "Hello neo";
//             t_list *new_list_list_size = mx_create_node(str_list_size);
//             mx_push_back(&new_list_list_size, str2_list_size);
//             mx_push_back(&new_list_list_size, str3_list_size);
//             printf("List size - %d\n", mx_list_size(new_list_list_size));
//    printf("\n---------------------------------MX_SORT_LIST----------------------\n");
//             t_list *new_list_sort = mx_create_node((void *)10);
//             mx_push_front(&new_list_sort, (void *) 3);
//             mx_push_front(&new_list_sort, (void *) 2);
//             mx_push_front(&new_list_sort, (void *) 1);
//             mx_push_front(&new_list_sort, (void *) 5);
//             mx_push_front(&new_list_sort, (void *) 95);
//             mx_push_front(&new_list_sort, (void *) 81);
//             mx_push_front(&new_list_sort, (void *) 32);
//             mx_push_front(&new_list_sort, (void *) 5);
//             mx_push_front(&new_list_sort, (void *) 8);
//             mx_push_front(&new_list_sort, (void *) 91);
//             mx_push_front(&new_list_sort, (void *) 45);
//
//             mx_printstr("mx_sort_list return 1 2 3 5 5 8 10 32 45 81 91 95?\n\n");
//
//             mx_sort_list(new_list_sort, mx_cmp);
//             while(new_list_sort) {
//                printf("%d ", (int) new_list_sort->data);
//                new_list_sort = new_list_sort->next;
//             }
    system("leaks -q a.out");
}
