public class Test {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int a=0,b=1,c;
        System.out.println(a+" "+b);
        for(int i=1;i<=10;i++){
        c=a+b;
        System.out.println(" "+c);
        a=b;
        b=c;
        }
        
    }
    
}
