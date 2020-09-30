class main {
    public static void main(String[] args){
            String[] entrada = new String[1000];
            String linha;
            int numEntrada = 0;

            do{
                    entrada[numEntrada] = MyIO.readLine();
            } while(igual(entrada[numEntrada++], "FIM") == false);
            numEntrada--;

            for(int i=0; i<numEntrada; i++){
                    if(ehPalindromo(entrada[i])){
                            MyIO.println("SIM");
                    } else{
                            MyIO.println("NAO");
                    }
            }
    }

public static boolean ehPalindromo(String palavra){
    return ehPalindromo(palavra, 0);
}

public static boolean ehPalindromo(String palavra, int i){
            boolean ehPalindromo = true;
            int ultimoChar = palavra.length()-1;
            
    if(i>=(double)ultimoChar/2){
        ehPalindromo = true;
    } else if(palavra.charAt(i) != palavra.charAt(ultimoChar-i)){
        ehPalindromo = false;
    } else{
        ehPalindromo = ehPalindromo(palavra, i+1);
    }
            return ehPalindromo;
    }

public static boolean igual(String palavraA, String palavraB){
    return igual(palavraA, palavraB, 0);
}        

public static boolean igual(String palavraA, String palavraB, int i){
            boolean ehIgual = true;
            if(palavraA.length() != palavraB.length()){
                    ehIgual = false;
            } else if(i<palavraA.length()){
        if(palavraA.charAt(i) != palavraB.charAt(i)){
            ehIgual = false;
        } else{
            ehIgual = igual(palavraA, palavraB, i+1);
        }
    } else{
        ehIgual = true;
    }
            return ehIgual;
    }
}
                
