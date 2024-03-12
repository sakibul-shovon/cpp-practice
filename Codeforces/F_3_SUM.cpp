struct EnemyBullet {
    float x;
    float y;
    float speed;

    EnemyBullet(float startX, float startY, float bulletSpeed)
        : x(startX), y(startY), speed(bulletSpeed) {}
};
struct Enemy {
    // Existing code...

    vector<EnemyBullet> bullets;

    void shoot() {
        float bulletSpeed = 5.0;  // Adjust as needed
        bullets.push_back(EnemyBullet(x, y, bulletSpeed));
    }

    void updateBullets() {
        for (int i = 0; i < bullets.size(); i++) {
            bullets[i].x += bullets[i].speed;
            // Additional logic to check if the bullet hits the player
            // and handle any necessary actions
        }
    }

    // Existing code...

    void render() {
        iShowBMP2(x, y, "images/enemy.bmp", 255);
        updateBullets();
        // Render enemy bullets
        for (int i = 0; i < bullets.size(); i++) {
            iShowBMP2(bullets[i].x, bullets[i].y, "images/bullet.bmp", 255);
        }
    }

    // Existing code...
};
void iDraw() {
    // Existing code...

    for (int i = 0; i < vEnemies.size(); i++) {
        vEnemies[i].render();
        vEnemies[i].MoveTowards();

        // Add the following line to make the enemy shoot
        vEnemies[i].shoot();
    }

    // Existing code...
}
