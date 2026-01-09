import { readFile } from "fs/promises";
import admin from "./firebase.js";

async function main() {
  const raw = await readFile("./members.json", "utf-8");
  const data = JSON.parse(raw);

  for (const key in data) {
    const m = data[key];

    const email = m.email.toLowerCase();
    const password = m.reg_no;

    try {
      await admin.auth().createUser({
        email,
        password,
        emailVerified: true
      });

      console.log(`Auth created: ${email}`);
    } catch (e) {
      if (e.code === "auth/email-already-exists") {
        console.log(`Auth already exists: ${email}`);
      } else {
        throw e;
      }
    }
  }

  console.log("Authentication provisioning complete.");
  process.exit(0);
}

main();
