namespace Ex001 {
    class Program {
        static void Main() {
            List<Animal> Animais = new List<Animal>();
            Cachorro c1 = new Cachorro(); Gato g1 = new Gato();
            Passaro p1 = new Passaro(); Peixe pe1 = new Peixe();
            Animais.Add(c1); Animais.Add(g1); Animais.Add(p1); Animais.Add(pe1);

            foreach (Animal Animal in Animais) {
                Animal.EmitirSom();
            }
        }
    }
}