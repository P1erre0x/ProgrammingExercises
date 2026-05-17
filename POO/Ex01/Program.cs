namespace Ex01 {
    class Program {
        static void Main() {
            Carro c1 = new Carro(), c2 = new Carro(), c3 = new Carro();
            c1.Cor = "Vermelho";
            c2.Cor = "Azul";
            c3.Cor = "Verde";
            Console.WriteLine(c1.Cor);
            Console.WriteLine(c2.Cor);
            Console.WriteLine(c3.Cor);
        }
    }
}