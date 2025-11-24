# Xbots  
Ce projet **XBot** est un programme en C++ qui simule et contrôle des robots virtuels. Ces derniers évoluent dans une arène, réagissent à leur environnement, utilisent des compteurs, génèrent du hasard et communiquent via différents modules.   
Le code est structuré en plusieurs classes comme **Arene**, **Compteur**, **Hasard**, **G990** et leurs **adaptateurs**, ce qui permet d’organiser clairement les rôles de chaque partie du système.  
L’objectif principal est de modéliser le comportement des robots, de gérer leur actions et leur capteurs, et de fournir une base propre et modulaire pour ajouter de nouvelles fonctionnalités.  
Le fichier main.cpp sert de point d’entrée, initialise les modules, configure les robots et lancent la logique générale.  
Ce projet met surtout l’accent sur:  
- Une architecture claire avec plusieurs classes qui collaborent  
- La simulation du fonctionnement d’un robot dans une arène  
- La gestion de modules séparés (capteurs, aléatoire, compteurs, ...)    
- Une approche modulaire pour faciliter l’évolution du code.  
En résumé, XBot est une simulation structurée de robots programmables, pensée pour être propre, modulaire et facile à comprendre.
