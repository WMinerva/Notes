---
id: '"El Plano"'
aliases:
tags:
  - planos
date: Nov 14 2026
---
### Definición del Plano

Un **plano** ($\pi$) en el espacio $\mathbb{R}^3$ es el conjunto de todos los puntos $P(x, y, z)$ que satisfacen una relación lineal de primer grado. Queda determinado de forma única por:
* Un punto conocido $P_0(x_0, y_0, z_0)$ y dos vectores directores $\vec{u} = (u_1, u_2, u_3)$ y $\vec{v} = (v_1, v_2, v_3)$ linealmente independientes.
* Un punto conocido $P_0(x_0, y_0, z_0)$ y un vector normal $\vec{N} = (A, B, C)$ perpendicular al plano.

---

### Ecuaciones del Plano

**1. Ecuación Vectorial:**
$$(x, y, z) = (x_0, y_0, z_0) + \lambda (u_1, u_2, u_3) + \mu (v_1, v_2, v_3) \quad ; \quad \lambda, \mu \in \mathbb{R}$$

**2. Ecuaciones Paramétricas:**
$$\begin{cases}
x = x_0 + \lambda u_1 + \mu v_1 \\
y = y_0 + \lambda u_2 + \mu v_2 \\
z = z_0 + \lambda u_3 + \mu v_3
\end{cases}$$

**3. Ecuación General (o Implícita):**
Se obtiene desarrollando el producto escalar $\vec{N} \cdot \overrightarrow{P_0P} = 0$:
$$Ax + By + Cz + D = 0$$
Donde $\vec{N} = (A, B, C)$ es el vector normal y $D = -(Ax_0 + By_0 + Cz_0)$.

**4. Ecuación Canónica (o Segmentaria):**
Si el plano corta a los ejes coordenados en los puntos $(a, 0, 0)$, $(0, b, 0)$ y $(0, 0, c)$:

$$\frac{x}{a} + \frac{y}{b} + \frac{z}{c} = 1$$
