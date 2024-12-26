<?php 
    print("<h1>Welcome to PHP</h1>"); 
    $cookie_name = "user"; 
    $cookie_value = "Vaibhav D Lalasangi"; 
    setcookie($cookie_name, $cookie_value, time() + 86000); 
    print "$cookie_name<br>"; 
    print $_COOKIE[$cookie_name]; 
?>
