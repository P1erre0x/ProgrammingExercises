namespace Ex007 {
    public class Loja {

        public double Calcular(double valor) {
            return valor * 0.95;
        }


        public double Calcular(double valor, double percentual) {
            if (percentual > 1) {
                percentual = percentual / 100;
                return valor - (valor * percentual);
            }
            else {
                return valor * percentual;
            }
        }
    }
}
