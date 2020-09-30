class main {
    public static void main(String[] args) {
        String[] entrada = new String[1000];
        String linha;
        int numEntrada = 0;

        do {
            entrada[numEntrada] = MyIO.readLine();
        } while (igual(entrada[numEntrada++], "FIM") == false);
        numEntrada--;

        for (int i = 0; i < numEntrada; i++) {
            /*
             * Retorna SIM caso seja verdadeira e NAO caso seja falso caso
             *  a palavra seja composta somente por vogais, por
             consoantes. Se for número inteiro ou se for um número real
             */
            MyIO.println(resposta(soVogais(entrada[i])) + " " + resposta(soConsoantes(entrada[i])) + " "
                    + resposta(ehInteiro(entrada[i])) + " " + resposta(ehReal(entrada[i])));
        }

    }

    // Retorna true se a palavra for composta somente por vogais
    public static boolean soVogais(String palavra) {
        boolean soVogais = true;
        int i = 0;
        while (soVogais && i < palavra.length()) {
            if (vogalOuConsoante(palavra.charAt(i)) != 'V') {
                soVogais = false;
            }
            i++;
        }
        return soVogais;
    }

    // Retorna true se a palavra for composta somente por consoantes
    public static boolean soConsoantes(String palavra) {
        boolean soConsoantes = true;
        int i = 0;
        while (soConsoantes && i < palavra.length()) {
            if (vogalOuConsoante(palavra.charAt(i)) != 'C') {
                soConsoantes = false;
            }
            i++;
        }
        return soConsoantes;
    }

    // Retorna true se a palavra for um número
    // inteiro
    public static boolean ehInteiro(String palavra) {
        boolean ehInteiro = true;
        try {
            Integer.parseInt(palavra);
        } catch (NumberFormatException numberFormatException) {
            ehInteiro = false;
        }
        return ehInteiro;
    }

    // Retorna true se a palavra for um número
    // real
    public static boolean ehReal(String palavra) {
        boolean ehReal = true;
        try {
            Double.parseDouble(trocaVirgula(palavra));
        } catch (NumberFormatException numberFormatException) {
            ehReal = false;
        }
        return ehReal;
    }

    // Verifica se duas strings são iguais e retorna true em
    // caso verdadeiro
    public static boolean igual(String palavraA, String palavraB) {
        boolean ehIgual = true;
        if (palavraA.length() != palavraB.length()) {
            ehIgual = false;
        } else {
            int i = 0;
            while (i < palavraA.length() && ehIgual) {
                if (palavraA.charAt(i) != palavraB.charAt(i)) {
                    ehIgual = false;
                }
                i++;
            }
        }
        return ehIgual;
    }

    // Método que recebe como parâmetro um caractere e retorna (V) caso seja uma
    // vogal, (C) caso seja uma consoante e (N) caso nenhum dos dois
    public static char vogalOuConsoante(char letra) {
        char resposta = 'N';
        if (letra >= 'a' && letra <= 'z' || letra >= 'A' && letra <= 'Z') {
            if (ehVogal(letra)) {
                resposta = 'V';
            } else {
                resposta = 'C';
            }
        }
        return resposta;
    }

    // Método que retorna true caso o caractere seja uma vogal
    public static boolean ehVogal(char letra) {
        boolean ehVogal = false;
        if ((letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I'
                || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U')) {
            ehVogal = true;
        }
        return ehVogal;
    }

    // Método que troca , por . para verificação de um numero real
    public static String trocaVirgula(String palavra) {
        String palavraNova = "";
        for (int i = 0; i < palavra.length(); i++) {
            if (palavra.charAt(i) == ',') {
                palavraNova += ".";
            } else {
                palavraNova += palavra.charAt(i);
            }
        }
        return palavraNova;
    }

    // Retorna SIM ou NAO dependendo do valor booleano 
    public static String resposta(boolean valor) {
        String retorno = "";
        if (valor) {
            retorno = "SIM";
        } else {
            retorno = "NAO";
        }
        return retorno;
    }
}