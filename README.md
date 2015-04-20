# Programmiersprachen Übung aus dem Sommersemester-2015

`g++ -c helloworld.cpp` kompiliert den Quelltext, es entsteht eine Objektdatei `helloworld.o`. Anschließend müssen die Objektdateien zu einem ausführbaren Programm gelinkt werden. 
`g++ helloworld.o -o helloworld`
Ausgeführt wird das Programm dann einfach per `./helloworld`



## Initialisierung und Zuweisung
`int name = 10;` Variable wird deklariert und gesetzt (Speicher wird mit initialem Wert gesetzt.)
`name = 20;` Einer Variable wird ein neuer Wert zugewiesen.

## Deklaration und Definition
`Deklaration` Dem Compiler wird eine Funktion, Objekt, Variable angemeldet. Der Bezeichner wird reserviert.
`Definition` stellt die Funktionalität her. Dem Compiler wird mitgeteilt, dass etwas tatsächlich angelegt werden soll.


# Glossar
- **C++**   Ist eine Programmiersprache. 1979 von Bjarne Stroustrup bei AT&T als Erweiterung der Sprache C entwickelt. C++ ermöglicht sowohl die effiziente und maschinennahe Programmierung als auch eine Programmierung auf hohem Abstraktionsniveau.
- **Quellcode**   (source code) Menschenlesbarer in einer Programmiersprache geschriebener Text eines Computerprogramms.
- **Compiler**   (zusammentragen) Ist ein Programm, welches Quellcode einer Hochsprache in Maschienencode (Assamblercode, Bytecode…) übersetzt.
- **Linker**   Verbindet einzelne Programmmodule zu einem ausführbaren Programm.
- **Objektcode**   Ein Zwischenergebnis des Compilers. Es entstehen Objektdateien, welche noch gelinkt werden müssen. (`*.o`)
- **Ausführbare Datei**   Programmdatei (unter Windows leicht zu erkennen z.B. `*.exe`) Unter Unix keine Dateiendung.
- **main()**   Die `main()` Funktion wird zu Beginn eines Programms ausgeführt. Von ihr geht jeder weitere Programmablauf aus. Wenn die main Funktion abgeschlossen ist, ein return erreicht wurde, ist das Programm beendet.
- **#include**   Andere Dateien, sowie Bibliotheken und Klassen lassen sich über diesen Befehl einbinden. `#include <string>    #include <Datei.h>`
- **Kommentar**   `// alls nach den Backslash bis zum Zeilenende wird nicht ausgeführt
/* Dieser Kommentar erstreckt sich über mehrere Zeilen. … */`
- **Header**   Deklarationen erfolgen im Header. Diese werden häufig ausgelagert in eine extra Datei `*.hpp`
- **Programm**   Ist die Abfolge von Anweisungen, um auf einem Computer eine bestimmte Funktionalität, Aufgaben- oder Problemstellung zu bearbeiten.
- **Ausgabe**   Bezeichnet das was der Benutzer als Ergebnis eines Programms erhält. Das Programm sendet dem Benutzer eine Nachricht.
- **std::cout**   Ist die Ausgabe auf der Kommandozeile. Der Befehl ist Teil der std Bibliothek. Es wird `<<` zur Verkettung des Ausgabestreams benötigt.
- **std::cin**   Ist die Eingabe auf der Kommandozeile. Der Befehl ist Teil der std Bibliothek. Es wird `>>` zur Verkettung des Eingabestreams benötigt.
- **<<**   Verkettungssymbol des Ausgabestreams. 
- **>>**   Verkettungssymbol des Eingabestreams.
- **Funktion**   Bezeichnet ein Unterprogramm welche eine bestimmte Funktionalität bereit hält. Es kann mit Parametern (Werte übergeben) aufgerufen werden und kann dann einen Wert zurück geben.
- **Funktionssignatur**   Die Signatur einer Funktion gibt an von welchem Typ die Eingabeparameter sowie der Rückgabewert sind.
- **Deklaration**   Dem Compiler wird bekannt gegeben, dass es einen bestimmten Bezeichner gibt. Findet zumeist im Header statt. So dass im Programmfluss alles bereits angemeldet und bekannt ist.
- **Definition**   Die Definition stellt die Funktionalität her. Dem Compiler wird mitgeteilt, dass etwas tatsächlich angelegt werden soll.
- **Typ**   `void` (kein Typ), `int` (Ganzzahlen), `double` (Fließkommazahl), `char` (Zeichen), …
- **Typkonvertierung**   Typen werden bei der Deklaration von Variablen festgelegt. Dies lässt sich nicht mehr ändern. In manchen Fällen ist es aber notwendig von einem Typ in einen andere Typen zu konvertieren (überführen). Es gibt zwei Varianten: implizit und explizit. Implizit, der Compiler gleicht automatisch an. Explizit ist zum Beispiel notwendig, wenn Ganzzahlen miteinander dividiert werden sollen und eine Gleitkommazahl entstehen soll.
- **Variable**   In einer Variable können Werte gespeichert und verändert werden.
- **Name**   Ist der Bezeichner. Über diesen wird eine Variable, Objekt, Funktion… eindeutig angesprochen.
- **Wert**   Ist der Inhalt einer Variable mit einem bestimmten Typ. z.B eine Zahl, oder ein Zeichen.
- **Initialisierung**   Einer deklarierten Variable wird ein Anfangswert zugewiesen. Zumeist - erfolgt die Deklaration und Initialisierung in einem Schritt. z.B. `int i = 1;`
- **Zuweisung**   Wert aus einem existierenden Objekt wird einem anderen existierenden Objekt - zugewiesen. z.B. `a(b);  bzw. a = b;`
- **const**   `const` verspricht, dass die der Übergabewert "by reference" nach dem Funktionsablauf unverändert ist. Verändernde Methoden können nicht ausgeführt werden.
- **Gültigkeitsbereich**   Bezeichnet einen Bereich in dem deklarierte Bezeichner erhalten bleiben. Der Bereich wird über Scopes geregelt `{ }` oder bei Übergabe "by reference" auf weitere Programmteile ausgedehnt werden.
