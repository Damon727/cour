/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package td1;

/**
 *
 * @author cmaillard
 */
public class Voiture {
    //attributs
    private String couleur;
    private  int nbKilometres;
    
    //methodes
    public Voiture(String couleur, int nbKilometres){
        this.couleur = couleur;
        this.nbKilometres = nbKilometres;
    }
    public Voiture(){
        this.couleur = "pas couleur";
        this.nbKilometres = 0;
    }
    
    public void rouler(int distance){
        nbKilometres+=distance;
    }
    public void afficher(){
        System.out.println("Couleur de la voiture :"+couleur);
        System.out.println("Kilométrage de la voiture :"+nbKilometres);
    }
    
}
