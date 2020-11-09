int mx_strncmp(const char *s1, const char *s2, int n) {
	for(int i = 1; i < n; i++) {
		if(*s1 && *s1 == *s2) {
			s1++;
			s2++;
		}
	}
	return (unsigned char) *s1 - (unsigned char) *s2;	
}
