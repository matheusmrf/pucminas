// Grafo Nao Direcionado, Ponderado
public class AdjacencyGraph{
    private int matrizAdjacente[][];
    private int numVertices;


    public AdjacencyGraph(int numVertices) {
        this.numVertices = numVertices;
        matrizAdjacente = new int[numVertices][numVertices];

        for(int i = 0; i < numVertices; i++) {
            for(int j = 0; j < numVertices; j++) {
                matrizAdjacente[i][j] = 0;
            }
        }
    }

    boolean arrestaAlreadyExists(int origem, int destino) {
        return matrizAdjacente[origem][destino] != 0;
    }

    public void addAresta(int origem, int destino, int peso){
        if(arrestaAlreadyExists(origem, destino) && arrestaAlreadyExists(destino, origem)){
            System.out.println("Aresta já existe!");
        } else {
            matrizAdjacente[origem][destino] = peso;
            matrizAdjacente[destino][origem] = peso;
        }
    }

    public void matrizConverter() {
        System.out.println(" \t 0  1  2  3   \n");
        for (int i = 0; i < numVertices; i++) {
            System.out.print(i + "\t");
            for(int j = 0; j < numVertices; j++){
                System.out.print(" " + matrizAdjacente[i][j] + " ");
            }
            System.out.print("\n");
        }
    }

}