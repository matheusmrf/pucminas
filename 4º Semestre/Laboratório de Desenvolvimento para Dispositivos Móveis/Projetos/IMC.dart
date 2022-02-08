import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: "Flutter IMC",
      home: HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  const HomePage({Key? key}) : super(key: key);

  @override
  _HomePageState createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  final _tPeso = TextEditingController();
  final _tAltura = TextEditingController();
  var infoText = "Informe seus dados!";
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: Text("Calculadora de IMC"), centerTitle: true),
      body: body(),
    );
  }

  body() {
    return Container(
        padding: EdgeInsets.all(15.0),
        child: Form(
          child: Column(
            children: [
              TextFormField(
                keyboardType: TextInputType.number,
                decoration: InputDecoration(labelText: "Altura em cm"),
                controller: _tAltura,
              ),
              TextFormField(
                keyboardType: TextInputType.number,
                decoration: InputDecoration(labelText: "Peso"),
                controller: _tPeso,
              ),
              ElevatedButton(
                  onPressed: calcular, child: Text("Calcular o IMC")),
              Text(
                infoText,
                textAlign: TextAlign.center,
              )
            ],
          ),
        ));
  }

  calcular() {
    setState(() {
      double peso = double.parse(_tPeso.text);
      double altura = double.parse(_tAltura.text);
      double imc = peso / (altura * altura);
      String imcStr = imc.toStringAsPrecision(4);

      if (imc < 17) {
        infoText = "Muito abaixo do peso ($imcStr)";
      } else if (imc < 18.5) {
        infoText = "Abaixo do Peso ($imcStr)";
      } else if (imc < 25) {
        infoText = "Peso Normal ($imcStr)";
      } else if (imc < 30) {
        infoText = "Acima do Peso ($imcStr)";
      } else if (imc < 35) {
        infoText = "Obesidade Grau I ($imcStr)";
      } else if (imc < 40) {
        infoText = "Obesidade Grau II ($imcStr)";
      } else {
        infoText = "Obesidade Grau III ($imcStr)";
      }
    });
  }
}
