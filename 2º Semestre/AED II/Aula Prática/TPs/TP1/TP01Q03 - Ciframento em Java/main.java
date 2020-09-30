public class main {

    //Altera a frase com a cifra de cesar
    public static char cesar(char c){
        return (char)(c+3);
   }

   public static boolean isFim(String s){
	return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
}

    public static void main(String[] args) {
       String s = MyIO.readLine();
       do {
           String resultado = "";
        	// 
            for(int i = 0; i < s.length(); i++){
                resultado += cesar(s.charAt(i));
            }

            s = resultado;
            MyIO.println(s);
            s = MyIO.readLine();

       }while(isFim(s) == false);    
    }
}