struct User {
    _active: bool, 
    username: String,
    email: String,
    _sign: u64,
}

fn main(){
    // Instance of user struct
    let _u1 = User{ 
        _active: true,
        username: String::from("user1"),
        email: String::from("this@email.com"),
        _sign: 444,
    };

    // We can also have mutable instances    
    let mut _u2 = User{ 
        _active: true,
        username: String::from("user2"),
        email: String::from("old@email.com"),
        _sign: 44,
    };

    _u2.email = String::from("New@email.com");

    // Calling build func
    //output: built_user and built@email.com
    let _u3 = build("built_user", "built@email.com");
    println!("username: {}\nemail: {}", _u3.username, _u3.email);

    // Struct Updating: Copying values from 1 struct to another
    let _ulast = User{
        _active: _u2._active,
        username: _u2.username,
        email: String::from("New@email.com"),
        _sign: _u2._sign,
    };

    println!("{}, {}, {}, {}", _ulast._active, _ulast.username, _ulast.email, _ulast._sign);
    // next statement wouldnt work because value has been borrowed
    //println!("{}", _u2.username);

    let _ulast_alt = User{
        email: String::from("if you want to change Only the email"),
        .._u1 // to copy every other value from _u1
    };
}

////////////////////////////////// FUNCTIONS
// Functioncs can also create and return instances
fn build(username: &str, email: &str) -> User {
    User{
        _active: true,
        username: String::from(username),
        email: String::from(email),
        _sign: 1,
    }
}

// can avoid repeating ourselves by just typing the name of the field
// if the var name and argument is the same
fn _build_2(username: String, email: String) -> User {
    User{
        _active: true,
        username,
        email,
        _sign: 1,
    }
}
