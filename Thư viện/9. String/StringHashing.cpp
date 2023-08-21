
hash.resize(n + 2, 0LL);
rev_hash.resize(n + 2, 0LL);
power27.resize(n + 2, 0LL);
power27[0] = 1LL; 
for (int i = 1; i <= n; i++) {
    power27[i] = power27[i - 1] * 27LL; 
    	hash[i] = hash[i - 1] * 27LL + (pattern[i - 1] - 'a' + 1); 
    	rev_hash[i] = rev_hash[i - 1] * 27LL + (rev_pattern[i - 1] - 'a' + 1); 
  	}
} 

long long getHash(int l, int r, const std::vector <long long> &hash) {
	int len = r - l + 1;
	long long ret = hash[r];
	ret -= (hash[l - 1] * power27[len]);
	return ret;  
}
