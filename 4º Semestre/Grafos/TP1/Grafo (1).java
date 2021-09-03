import java.util.ArrayList;
import java.util.List;

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
    List<Aresta> arestasAdjacentes;

    Vertice(String nome) {
        this.nome = nome;
        this.arestasAdjacentes = new ArrayList<>();
    }

    void addAdjacente(Aresta e) {
        arestasAdjacentes.add(e);
    }
}

// Grafo Não Direcional, Não Ponderado
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

    boolean arrestaAlreadyExists(Aresta teste) {
        for (int i = 0; i < arestas.size(); i++) {
            Aresta arrestaInIndex = arestas.get(i);
            if (arrestaInIndex.destino.equals(teste.destino) && arrestaInIndex.origem.equals(teste.origem)){
                return true;
            }
        }
        return false;
    }

    Aresta addAresta(Vertice origem, Vertice destino) {
        Aresta novaAresta = new Aresta(origem, destino);
        Aresta novaArestaContraria = new Aresta(destino, origem);

        if (arrestaAlreadyExists(novaAresta) || arrestaAlreadyExists(novaArestaContraria)) {
            System.out.println("Arresta já existe!");
            return null;
        }

        origem.addAdjacente(novaAresta);
        destino.addAdjacente(novaArestaContraria);

        arestas.add(novaAresta);
        arestas.add(novaArestaContraria);
        return novaAresta;
    }

    public String toString() {
        StringBuilder r = new StringBuilder();
        for (Vertice u : vertices) {
            r.append(u.nome).append(" -> ");
            for (Aresta e : u.arestasAdjacentes) {
                Vertice v = e.destino;
                r.append(v.nome).append(", ");
            }
            r.append("\n");
        }
        return r.toString();
    }
}
