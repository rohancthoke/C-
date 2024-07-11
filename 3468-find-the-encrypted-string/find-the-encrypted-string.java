class Solution {
    public String getEncryptedString(String s, int k) {
        int o=s.length();
        if(k>o){
            k=k%o;
        }
        String a=s+s;
        String r=a.substring(k,o+k);
        return r;
    }
}