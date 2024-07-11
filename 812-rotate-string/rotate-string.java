class Solution {
    public boolean rotateString(String s, String goal) {
        
        char a[]=s.toCharArray();
        char b[]=goal.toCharArray();
        int size=a.length;
        char previous;
        for(int i=0;i<size;i++){
            previous=a[size-1];
            for(int j=0;j<size;j++){
                char temp=a[j];
                a[j]=previous;
                previous=temp;

            }
            if(Arrays.equals(a,b)){
                return true;
            }
        }
        return false;
    }
}