fn main(){
    let mut s: String = String::from("Hello");

    s.push(',');
    s.push_str(" World");
    s += "!";

    println!("{}", s);

    /* Replace */
    let t = String::from("I love dogs");
    
    // allocate a new string to store modified string;
    // t remains unchanged
    let t1 = t.replace("dogs", "cats");
    println!("\n{}\n{}", t, t1);

    /* Concating Strings */
    let u1: String = String::from("hello ");
    let u2: String = String::from("world");

    let u3: String = u1 + u2.as_str(); // String -> &str
    // or let u3 = u1 + &u2;                                      
    //println!("\n{}\t{}\n{}", u1, u2, u3); // line wont work because u1 and u2 became empty
    println!("{}", u3);
} 
