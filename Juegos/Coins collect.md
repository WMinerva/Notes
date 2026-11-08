
| Etapa | Qué construiremos           | Qué aprenderás                                              |
| ----- | --------------------------- | ----------------------------------------------------------- |
| 1     | Coins recolectables         | `Touched`, `Attributes`, `ModuleScript`                     |
| 2     | Leaderstats + GUI           | datos del jugador, `LocalScript`, eventos                   |
| 3     | Multijugador                | separación entre jugadores y mundo compartido               |
| 4     | Guardado persistente        | `DataStoreService`, `UpdateAsync`, `BindToClose`            |
| 5     | Tienda y mejoras            | `ProximityPrompt`, `RemoteEvent`, validación servidor       |
| 6     | Varias mejoras              | velocidad, salto u otra mejora, sistema de tienda general   |
| 7     | GUI de tienda mejor hecha   | botones, precios, estados, mensajes de compra/error         |
| 8     | Respawn correcto de mejoras | mantener upgrades al morir y reaparecer                     |
| 9     | Balance básico              | precios, progresión, valores de monedas                     |
| 10    | Feedback visual             | sonidos, partículas, animaciones simples al recoger/comprar |
| 11    | Organización final          | limpiar scripts, módulos y estructura del proyecto          |
| 12    | Publicación                 | configuración, icono, thumbnail, permisos y pruebas         |
| 13    | Monetización básica         | Game Pass o Developer Product integrado correctamente       |
| 14    | Prueba final                | multijugador, guardado, exploits simples y errores comunes  |

## Documentacion Coins Collect

| #   | Sistema / concepto           | Lo que hicimos                                                                 | Ubicación               | Concepto aprendido                            |
| --- | ---------------------------- | ------------------------------------------------------------------------------ | ----------------------- | --------------------------------------------- |
| 1   | **Moneda inicial**           | Creamos una `Part` que funciona como moneda.                                   | `Workspace`             | `Part`, propiedades, `Anchored`, `CanCollide` |
| 2   | **Detección del jugador**    | Detectamos cuándo un personaje toca una moneda.                                | `CoinManager`           | Evento `Touched`                              |
| 3   | **Identificar jugador**      | Convertimos la parte que tocó la moneda en su `Player`.                        | `CoinManager`           | `GetPlayerFromCharacter()`                    |
| 4   | **Contador de Coins**        | Cada jugador recibe una variable `Coins`.                                      | `PlayerData`            | `leaderstats`, `Folder`, `IntValue`           |
| 5   | **Recolección**              | Al tocar una moneda aumentamos `Coins`.                                        | `CoinSystem`            | Modificar `IntValue.Value`                    |
| 6   | **Respawn**                  | La moneda desaparece y vuelve después de 3 segundos.                           | `CoinSystem`            | `Transparency`, `CanTouch`, `task.wait()`     |
| 7   | **Evitar recolección doble** | Cada moneda guarda si ya fue recogida.                                         | `CoinSystem`            | `Attributes`, booleanos                       |
| 8   | **Estado `Collected`**       | Usamos `GetAttribute()` y `SetAttribute()` para consultar/modificar su estado. | Cada `Coin`             | Estado individual por objeto                  |
| 9   | **Valores diferentes**       | Las monedas pueden valer `1`, `5`, `10`, etc.                                  | Cada `Coin`             | Attribute `Value`                             |
| 10  | **Sistema modular**          | Sacamos la lógica de recolección de las monedas individuales.                  | `CoinSystem`            | `ModuleScript`, `require()`                   |
| 11  | **Gestor de monedas**        | Un único script conecta las monedas con `CoinSystem`.                          | `CoinManager`           | Separación de responsabilidades               |
| 12  | **Monedas dinámicas**        | `CoinManager` también reconoce monedas creadas después de iniciar el juego.    | `CoinManager`           | Evento `ChildAdded`                           |
| 13  | **Spawner**                  | Las monedas se crean automáticamente desde código.                             | `CoinSpawner`           | `Instance.new()`, funciones                   |
| 14  | **Datos de monedas**         | Cada entrada contiene posición y valor.                                        | `CoinSpawner`           | Tablas de Luau, datos vs. lógica              |
| 15  | **Carpeta Coins**            | Todas las monedas generadas se organizan juntas.                               | `Workspace.Coins`       | Organización del proyecto                     |
| 16  | **GUI**                      | Empezamos una interfaz para mostrar `Coins: 0`.                                | `StarterGui.CoinGui`    | `ScreenGui`, `TextLabel`                      |
| 17  | **Código del cliente**       | Creamos un `LocalScript` para acceder al jugador local y mostrar sus Coins.    | `CoinLabel.LocalScript` | `LocalScript`, `LocalPlayer`                  |
| 18  | **Esperar objetos**          | Usamos `WaitForChild()` para esperar `leaderstats` y `Coins`.                  | `LocalScript`           | Sincronización cliente/servidor               |

| Sistema       | Responsabilidad                  |
| ------------- | -------------------------------- |
| `PlayerData`  | Crear los datos del jugador      |
| `CoinSpawner` | Crear monedas                    |
| `CoinManager` | Detectar/interconectar monedas   |
| `CoinSystem`  | Decidir qué ocurre al recogerlas |