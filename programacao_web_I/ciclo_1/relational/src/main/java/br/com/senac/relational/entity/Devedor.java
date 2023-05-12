package br.com.senac.relational.entity;

import jakarta.persistence.*;

import java.util.List;

@Entity
@Table(name = "devedor")
public class Devedor {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "id")
    private Long id;

    @Column(name = "nome")
    private String nome;

    @OneToMany(mappedBy = "devedor")
    private List<Divida> dividas;

    // getters e setters

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public List<Divida> getDividas() {
        return dividas;
    }

    public void setDividas(List<Divida> dividas) {
        this.dividas = dividas;
    }

    @Override
    public String toString() {
        return "Devedor{" +
                "idDevedor=" + id +
                ", nome='" + nome + '\'' +
                ", dividas=" + dividas +
                '}';
    }
}
