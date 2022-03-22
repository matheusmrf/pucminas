package net.roseindia;

import net.roseindia.model.*;

import java.util.*;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;
import javax.persistence.Query;
		/*
		//Compile mvn compile
		//Run: mvn exec:java -Dexec.mainClass="net.roseindia.AppTestCRUD"
		
		*/
/**
* @author Deepak Kumar - ALTERADO POR SANDRO LAUDARES
* More tutorials at http://www.roseindia.net
*/
		
public class AppTestCRUD {

	private static final String PERSISTENCE_UNIT_NAME = "psunit1";
	private static EntityManagerFactory factory;

	public static void main(String[] args) {
		factory = Persistence.createEntityManagerFactory(PERSISTENCE_UNIT_NAME);
		EntityManager em = factory.createEntityManager();

		em.getTransaction().begin();
		
		//Create and Persist 10 Objects
		for(int i=1;i<=10;i++){
			Contato c = new Contato();
			c.setCodigo(i);
			c.setNome("Java "+i);
			c.setEndereco("RUA JJJ, No. "+i);
			c.setTelefone("(31)9999-2233");
			em.persist(c);
		}
		em.getTransaction().commit();
		
		
		
		
		em.getTransaction().begin();
		//Read Operation
		
		
		//Select all the record from student table
		Query query = em.createQuery("SELECT o FROM Contato o");
		List lst = query.getResultList();
		Iterator it = lst.iterator();
		while (it.hasNext()){
			Contato cc = (Contato) it.next();
			System.out.print("Id: "+cc.getCodigo());
			System.out.print("Nome: "+cc.getNome());
			System.out.println("Endereco: "+cc.getEndereco());
			System.out.println("Telefone: "+cc.getTelefone());
		}
		
		em.getTransaction().commit();
		
		/* Update Example */
		//Load and update Entity Eample
		em.getTransaction().begin();
		//find 
		Contato ccc = em.find(Contato.class,1);
		ccc.setEndereco("RUA atualizada!");
		//update
		em.merge(ccc);
		em.getTransaction().commit();
		
		/* Delete Example */
		em.getTransaction().begin();
		//find 
		Contato cObj = em.find(Contato.class,2);
		//delete
		em.remove(cObj);
		em.getTransaction().commit();
		
		em.close();
		
	}
}
