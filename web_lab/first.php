<?php
// Set a cookie if the form is submitted
if (isset($_POST['submit'])) {
    $username = $_POST['username'];
    // Set the cookie to expire in 1 hour
    setcookie("username", $username, time() + 3600, "/");
}
?>
<!DOCTYPE html>
<html lang="en">
    
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Cookie Example</title>
</head>
<body>

<h1>Set a Cookie in PHP</h1>

<!-- Form to enter a username -->
<form method="POST">
    <label for="username">Enter your name: </label>
    <input type="text" name="username" id="username" required>
    <button type="submit" name="submit">Set Cookie</button>
</form>

<?php
// Display the cookie value if it's set
if (isset($_COOKIE['username'])) {
    echo "<p>Welcome, " . $_COOKIE['username'] . "!</p>";
} else {
    echo "<p>Cookie 'username' is not set yet.</p>";
}
?>

</body>
</html>
