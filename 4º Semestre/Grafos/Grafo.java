import java.util.List;
import java.util.ArrayList;

class Aresta {
    Vertice origem;
    Vertice destino;

    Aresta(Vertice origem, Vertice destino) {
        this.origem = origem;
        this.destino = destino;
    }
}

class Vertice {
    String nome;
    List<Aresta> adj;

    Vertice(String nome) {
        this.nome = nome;
        this.adj = new ArrayList<Aresta>();
    }

    void addAdj(Aresta e) {
        adj.add(e);
    }
}

// Grafo Direcional, Não Ponderado
public class Grafo {
    List<Vertice> vertices;
    List<Aresta> arestas;

    public Grafo() {
        this.vertices = new ArrayList<>();
        this.arestas = new ArrayList<>();
    }

    Vertice addVertice(String nome) {
        Vertice v = new Vertice(nome);
        vertices.add(v);
        return v;
    }

    boolean arrestaAlreadyExists(Aresta teste){
        for (int i = 0; i < arestas.size(); i++) {
            Aresta arrestaInIndex = arestas.get(i);
            if(arrestaInIndex.destino.equals(teste.destino) && arrestaInIndex.origem.equals(teste.origem)){
                return true;
            }
        }
        return false;
    }
    
    Aresta addAresta(Vertice origem, Vertice destino) {
        Aresta novaAresta = new Aresta(origem, destino);

        if (arrestaAlreadyExists(novaAresta)){
            System.out.println("Arresta já existe!");
            return null;
        }
        origem.addAdj(novaAresta);
        arestas.add(novaAresta);
        return novaAresta;
    }

    public String toString() {
        StringBuilder r = new StringBuilder();
        for (Vertice u : vertices) {
            r.append(u.nome).append(" -> ");
            for (Aresta e : u.adj) {
                Vertice v = e.destino;
                r.append(v.nome).append(", ");
            }
            r.append("\n");
        }
        return r.toString();
    }
}
