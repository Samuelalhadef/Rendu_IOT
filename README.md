# ESP32 Soviet Tetris avec Contrôle Mobile

Un jeu Tetris style soviétique fonctionnant sur ESP32, avec une interface web et un contrôleur mobile. Le jeu peut être joué sur ordinateur avec les touches du clavier ou sur mobile avec une interface de contrôle dédiée.

## ✨ Fonctionnalités

- Interface graphique style soviétique
- Mode double écran (jeu sur ordinateur, contrôles sur mobile)
- Communication en temps réel via WebSocket
- Système de score et de niveaux
- Augmentation progressive de la difficulté
- Support tactile pour mobile
- Point d'accès WiFi intégré

## 🛠️ Technologies Utilisées

- ESP32
- HTML5/CSS3
- JavaScript
- WebSocket
- PlatformIO
- SPIFFS (système de fichiers)

## 📋 Prérequis

- VS Code avec extension PlatformIO
- ESP32 DevKit
- Câble USB
- Navigateur web moderne
- Smartphone pour le contrôle mobile (optionnel)

## 🔧 Installation

1. Clonez le repository :
```bash
git clone https://github.com/votre-username/esp32-soviet-tetris.git
```

2. Ouvrez le projet dans VS Code avec PlatformIO

3. Modifiez le fichier `platformio.ini` :
```ini
[env:esp32dev]
platform = espressif32
board = esp32dev
framework = arduino
monitor_speed = 115200
board_build.filesystem = spiffs
lib_deps =
    links2004/WebSockets @ ^2.4.1
```

4. Téléversez le système de fichiers et le programme :
   - Build Filesystem Image
   - Upload Filesystem Image
   - Upload le programme principal

## 🎮 Utilisation

1. Allumez votre ESP32

2. Connectez-vous au réseau WiFi :
   - SSID : `ESP32_TETRIS`
   - Mot de passe : `12345678`

3. Pour jouer sur ordinateur :
   - Ouvrez `http://192.168.4.1` dans votre navigateur
   - Utilisez les touches flèches pour contrôler le jeu
   - Espace pour faire tomber la pièce instantanément

4. Pour utiliser un téléphone comme contrôleur :
   - Connectez votre téléphone au même réseau WiFi
   - Ouvrez `http://192.168.4.1/controller`
   - Utilisez les boutons tactiles pour contrôler le jeu

## 🎯 Contrôles

### Clavier (sur ordinateur)
- `←` `→` : Déplacer la pièce horizontalement
- `↑` : Rotation
- `↓` : Descente rapide
- `Espace` : Chute instantanée

### Mobile (télécommande)
- Bouton START : Démarrer/Redémarrer la partie
- Flèches directionnelles : Déplacer la pièce
- ROTATION : Faire pivoter la pièce
- DROP : Chute instantanée

## 📝 Structure du Projet

```
esp32-soviet-tetris/
├── src/
│   └── main.cpp           # Code principal ESP32
├── data/
│   ├── index.html         # Interface du jeu
│   ├── controller.html    # Interface de la télécommande
│   ├── styles.css         # Styles CSS
│   └── tetris.js          # Logique du jeu
├── platformio.ini         # Configuration PlatformIO
└── README.md
```

## 💡 Fonctionnalités Techniques

- Communication bidirectionnelle en temps réel via WebSocket
- Système de fichiers SPIFFS pour stocker les assets
- Point d'accès WiFi autonome
- Interface responsive pour différentes tailles d'écran
- Gestion des événements tactiles pour mobile


