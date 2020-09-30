import java.util.Random;

class main {

        public static void main(String[] args) {
                Random gerador = new Random();
                gerador.setSeed(4);

                String[] entrada = new String[1000];
                String linha;
                int numEntrada = 0;

                do {
                        entrada[numEntrada] = MyIO.readLine();
                } while (igual(entrada[numEntrada++], "FIM") == false);
                numEntrada--;

                for (int i = 0; i < numEntrada; i++) {
                        MyIO.println(alterarAleatoriamente(entrada[i], gerador));
                }

        }

        // Retorna a palavra com carecteres sortidos
        public static String alterarAleatoriamente(String palavraOriginal, Random gerador) {
                String palavraAlt = "";
                char letra = sorteiaLetra(gerador), trocada = sorteiaLetra(gerador);
                for (int i = 0; i < palavraOriginal.length(); i++) {
                        if (palavraOriginal.charAt(i) == letra) {
                                palavraAlt += trocada;
                        } else {
                                palavraAlt += palavraOriginal.charAt(i);
                        }
                }
                return palavraAlt;
        }

        public static char sorteiaLetra(Random gerador) {
                return (char) ('a' + (Math.abs(gerador.nextInt())) % 26);
        }

        /*
         * Verifica se duas strings passadas por parâmetro são iguais e retorna true
         * caso seja verdadeiro
         */
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
}