class main{
    public static void main(String[] args){
            String[] entrada = new String[1000];
            String linha;
            int numEntrada = 0;

            do{
                    entrada[numEntrada] = MyIO.readLine();
            } while(igual(entrada[numEntrada++], "FIM") == false);
            numEntrada--;

            for(int i=0; i<numEntrada; i++){
                    MyIO.println(cifrar(entrada[i]));
            }

    }

public static String cifrar(String palavraOriginal){
    return cifrar(palavraOriginal, 0);
}        

public static String cifrar(String palavraOriginal, int i){
            String palavraCifrada = "";
            int variacao = 3;

    if(i>=palavraOriginal.length()){
        palavraCifrada = "";
    } else{
        palavraCifrada = ((char)((int)palavraOriginal.charAt(i) + variacao)) + cifrar(palavraOriginal, i+1);
    }
            return palavraCifrada;
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

