/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex_diapo;

/**
 *
 * @author cmaillard
 */
public class InstrumentACorde extends InstrumentDeMusique{
    //attributs
    protected int nombreDeCorde;
    
    
    //constructeurs
    public InstrumentACorde(){
        System.out.println("constructeur defaut InstrumentACorde");
    }

    

    public InstrumentACorde(int nombreDeCorde, String nom) {
        super(nom);
        this.nombreDeCorde = nombreDeCorde;
    }
    public InstrumentACorde(InstrumentACorde ia) {
        super(ia);
        this.nombreDeCorde = ia.nombreDeCorde;
    }
    //methodes
    public void afficherCorde() {
        System.out.println("Nombre de cordes :"+nombreDeCorde);
    }
}
