# CPP Module 03 — Inheritance / Héritage

> 42 C++ Piscine. This module is all about **inheritance**: a base `ClapTrap` class, derived `ScavTrap` and `FragTrap` classes, and a bonus `DiamondTrap` built with **diamond inheritance**.
>
> 42 Piscine C++. Ce module porte sur l'**héritage** : une classe de base `ClapTrap`, des classes dérivées `ScavTrap` et `FragTrap`, et un `DiamondTrap` bonus construit en **héritage en diamant**.

---

## 🇬🇧 English

### Theme

The module introduces **inheritance** in C++98. Each exercise builds on the previous one:

- A base class (`ClapTrap`) holding the shared state — name, hit points, energy points, attack damage — and the shared behaviour (`attack`, `takeDamage`, `beRepaired`).
- Derived classes (`ScavTrap`, `FragTrap`) that reuse the base through public inheritance and add their own abilities.
- A bonus `DiamondTrap` showing **diamond inheritance** — it derives from *both* `ScavTrap` and `FragTrap`, which themselves both derive from `ClapTrap`.

### Exercises

| Exercise | Binary | Classes | Description |
| --- | --- | --- | --- |
| `ex00` | `ClapTrap` | `ClapTrap` | The base class. Stores name, hit points, energy points and attack damage. Implements `attack`, `takeDamage` and `beRepaired`, each guarded by hit/energy points and logging an explanatory message. |
| `ex01` | `ScavTrap` | `ClapTrap`, `ScavTrap` | `ScavTrap : public ClapTrap`. Reuses the base but overrides `attack` and adds `guardGate()`. Its constructors/destructor demonstrate the call order between base and derived class. |
| `ex02` | `FragTrap` | `ClapTrap`, `FragTrap` | `FragTrap : public ClapTrap`. A second sibling derived class adding `highFivesGuys()`, with its own constructor/destructor messages. |
| `ex03` (bonus) | `NowItsWeird!` | `ClapTrap`, `ScavTrap`, `FragTrap`, `DiamondTrap` | `DiamondTrap : public ScavTrap, public FragTrap`. The classic **diamond**: both parents derive from `ClapTrap`. Keeps its own `Name` distinct from the inherited `ClapTrap` name, overrides `attack`, and adds `whoAmI()`. |

### Build & Run

Each exercise is self-contained with its own `Makefile`. Build and run from inside the exercise folder:

```bash
cd ex00 && make && ./ClapTrap
cd ex01 && make && ./ScavTrap
cd ex02 && make && ./FragTrap
cd ex03 && make && ./'NowItsWeird!'
```

All Makefiles compile with `-Wall -Wextra -Werror -std=c++98 -pedantic`.

### What I learned

- **Inheritance in C++**: factoring shared state and behaviour into a base class and extending it through public inheritance.
- **Base vs derived classes**: how a derived class reuses, overrides and extends the members of its base.
- **Constructor / destructor order**: base constructors run before derived ones, and destructors run in the reverse order — visible directly in the program output.
- **Diamond & virtual inheritance**: how deriving from two classes that share a common base (`DiamondTrap`) creates the diamond problem, and why virtual inheritance matters to keep a single shared `ClapTrap` sub-object.

---

## 🇫🇷 Français

### Thème

Ce module introduit l'**héritage** en C++98. Chaque exercice s'appuie sur le précédent :

- Une classe de base (`ClapTrap`) qui porte l'état commun — nom, points de vie, points d'énergie, dégâts d'attaque — et le comportement commun (`attack`, `takeDamage`, `beRepaired`).
- Des classes dérivées (`ScavTrap`, `FragTrap`) qui réutilisent la base par héritage public et ajoutent leurs propres capacités.
- Un `DiamondTrap` bonus qui illustre l'**héritage en diamant** — il dérive *à la fois* de `ScavTrap` et de `FragTrap`, qui dérivent toutes deux de `ClapTrap`.

### Exercices

| Exercice | Binaire | Classes | Description |
| --- | --- | --- | --- |
| `ex00` | `ClapTrap` | `ClapTrap` | La classe de base. Stocke le nom, les points de vie, les points d'énergie et les dégâts d'attaque. Implémente `attack`, `takeDamage` et `beRepaired`, chacune conditionnée par les points de vie/énergie et affichant un message explicatif. |
| `ex01` | `ScavTrap` | `ClapTrap`, `ScavTrap` | `ScavTrap : public ClapTrap`. Réutilise la base, redéfinit `attack` et ajoute `guardGate()`. Ses constructeurs/destructeur montrent l'ordre des appels entre classe de base et classe dérivée. |
| `ex02` | `FragTrap` | `ClapTrap`, `FragTrap` | `FragTrap : public ClapTrap`. Une deuxième classe dérivée sœur qui ajoute `highFivesGuys()`, avec ses propres messages de constructeur/destructeur. |
| `ex03` (bonus) | `NowItsWeird!` | `ClapTrap`, `ScavTrap`, `FragTrap`, `DiamondTrap` | `DiamondTrap : public ScavTrap, public FragTrap`. Le **diamant** classique : les deux parents dérivent de `ClapTrap`. Conserve son propre `Name` distinct du nom hérité de `ClapTrap`, redéfinit `attack` et ajoute `whoAmI()`. |

### Compilation & Lancement

Chaque exercice est autonome avec son propre `Makefile`. Compilez et lancez depuis le dossier de l'exercice :

```bash
cd ex00 && make && ./ClapTrap
cd ex01 && make && ./ScavTrap
cd ex02 && make && ./FragTrap
cd ex03 && make && ./'NowItsWeird!'
```

Tous les Makefiles compilent avec `-Wall -Wextra -Werror -std=c++98 -pedantic`.

### Ce que ça m'a apporté

- **L'héritage en C++** : factoriser l'état et le comportement communs dans une classe de base, puis l'étendre par héritage public.
- **Classes de base vs classes dérivées** : comment une classe dérivée réutilise, redéfinit et étend les membres de sa base.
- **Ordre des constructeurs / destructeurs** : les constructeurs de base s'exécutent avant ceux des dérivées, et les destructeurs dans l'ordre inverse — visible directement dans la sortie du programme.
- **Héritage en diamant & virtuel** : comment dériver de deux classes partageant une base commune (`DiamondTrap`) crée le problème du diamant, et pourquoi l'héritage virtuel est nécessaire pour ne garder qu'un seul sous-objet `ClapTrap` partagé.
